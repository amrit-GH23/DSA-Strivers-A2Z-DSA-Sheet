//Sort Colors
//Time complexity: O(n)
//Space complexity: O(1)


#include<iostream>
#include<vector>

using namespace std;

void sortColors(vector<int>& nums) {
    int n=nums.size();
    int j=0;
    int i=0;
    while(i<n){
        if(nums[i]==0){
            swap(nums[i],nums[j]);
            j++;
        }
        i++;
    }
    i=0;
      while(i<n){
        if(nums[i]==1){
            swap(nums[i],nums[j]);
            j++;
        }
        i++;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
   sortColors(arr);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}