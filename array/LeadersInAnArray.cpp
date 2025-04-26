//Leaders in an Array
//Time Complexity: O(n)
//Space Complexity: O(n) 

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> leaders(vector<int>& nums) {
    int n=nums.size();
    int maxi=nums[n-1];
    vector<int>ans;
    ans.push_back(maxi);
    for(int i=n-2;i>=0;i--){
        if(nums[i]>maxi){
         maxi=nums[i];
         ans.push_back(maxi);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
 }

 int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<int> ans =leaders(arr);
    for(int i=0;i<ans.size();i++){     
        cout<<ans[i]<<" ";
    }

    return 0;
}