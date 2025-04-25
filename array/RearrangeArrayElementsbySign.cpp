//Rearrange Array Elements by Sign
//Time Complexity: O(n)
//Space Complexity: O(n)

#include<iostream>
#include<vector>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n=nums.size();
    vector<int>ans(n);
    int j=0;
    int i=0;
    int k=1;
    while(i<n){
        if(nums[i]>0){
            ans[j]=nums[i];
            j+=2;
        }
        else{
            ans[k]=nums[i];
            k+=2;
        }
        i++;
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
    
    vector<int> ans =rearrangeArray(arr);
    for(int i=0;i<n;i++){     
        cout<<ans[i]<<" ";
    }

    return 0;
}