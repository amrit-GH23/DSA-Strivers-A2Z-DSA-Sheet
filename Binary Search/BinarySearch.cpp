//Binary Search
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

 int search(vector<int>& nums, int target) {
         int n=nums.size();
         int low=0;
         int high=n-1;
         while(low<=high){
            int mid=(high+low)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target){
                high=mid-1;
            }
            else low=mid+1;
         }
         return -1;
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
   int ans =search(arr,target);
   cout<<ans;
    return 0;
}