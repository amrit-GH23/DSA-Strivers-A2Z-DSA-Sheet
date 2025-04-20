//Single Number
//Time Complexity : O(n)
//Space Complexity : O(1)

#include<iostream>
#include<vector>

using namespace std;

int singleNumber(vector<int>& nums) {
    int n=nums.size();
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=nums[i];
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans=singleNumber(arr);
    cout<<ans;

    return 0;
}