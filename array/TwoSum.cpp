// Two Sum
//Time complexity: O(n)
//Space complexity: O(n)

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> m;  
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (m.find(complement) != m.end()) {
            return {m[complement], i}; 
        }
        m[nums[i]] = i;
    }
    return {}; // if no pair found
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
   vector<int> ans =twoSum(arr,target);
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
    return 0;
}