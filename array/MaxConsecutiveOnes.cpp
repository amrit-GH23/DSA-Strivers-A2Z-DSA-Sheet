//Max Consecutive Ones
//Time complexity: O(n)
//Space Complexity: O


#include<iostream>
#include<vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int n=nums.size();
    int count =0;
    int maxi=0;
    for(int i=0;i<n;i++){
      if(nums[i]==1){
          count++;
      }
      else{
         maxi=max(count,maxi);
         count=0;
      }
    }
    maxi=max(maxi,count);
    return maxi;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans=findMaxConsecutiveOnes(arr);
    cout<<ans;

    return 0;
}