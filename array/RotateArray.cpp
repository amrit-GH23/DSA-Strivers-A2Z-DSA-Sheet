//Rotate Array by k steps to right
//Solution: Time complexity: O(n)
// Space Complexity: O(n) — because push_back creates a temporary extension of the array

#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int>&arr,int k){
    int n=arr.size();
    k=k%n;
    int range=n-k;
   for(int i=0;i<range;i++){
      arr.push_back(arr[i]);
   }
     arr.erase(arr.begin(),arr.begin()+range);
   }

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;
    
   rotate(arr,k);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}