//Return the second largest element, Return -1  is it does not exist
//Solution: Time Complexity : O(N)
// Space Complexity : O(1)

#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int SecondLargest(vector<int>&arr,int n){
    int maxi=arr[0];
    int secondMax=-1;

    for(int i=1;i<n;i++){
        if(arr[i]>maxi){
            secondMax=maxi;
            maxi=arr[i];
        }
        else if(arr[i]>secondMax && arr[i]!=maxi){
            secondMax=arr[i];
        }
    }
    return secondMax;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans =SecondLargest(arr,n);

    cout<<ans;

    return 0;
}