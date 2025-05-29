// Maximum Subarray
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>maxi)maxi=sum;
            if(sum<0)sum=0;
        }
        return maxi;
    }

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
   int ans =maxSubArray(arr);
   cout<<ans;
    return 0;
}