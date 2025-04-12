//Given an array arr[]. The task is to find the largest element and return it.

#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int largestElement(vector<int>&arr,int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
       maxi=max(arr[i],maxi);
    }
    return maxi;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   int ans= largestElement(arr,n);
   cout<<ans<<"\n";

    return 0;
}