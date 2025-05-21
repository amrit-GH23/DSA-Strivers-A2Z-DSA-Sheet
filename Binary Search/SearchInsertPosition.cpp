//Search Insert Position
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
#include<vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target)high=mid-1;
            else low=mid+1;
        }
        return low;
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
   int ans =searchInsert(arr,target);
   cout<<ans;
    return 0;
}