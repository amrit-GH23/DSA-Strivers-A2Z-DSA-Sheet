//Missing Number
//Solution : Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
#include<vector>

using namespace std;

int missingNumber(vector<int>& nums) {
    int n=nums.size();
    int res=(n*(n+1))/2;
    for(int i=0;i<n;i++){
       res-=nums[i];
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans=missingNumber(arr);
    cout<<ans;

    return 0;
}