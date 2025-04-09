//selection sort -Ascending Order
//Time complexity O(n^2) 
// Space complexity O(1)

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>&arr,int n){
     for(int i=0;i<n;i++){
        int index=i;
         for(int j=i;j<n;j++){
              if(arr[j]<arr[index]){
                index=j;
              }
         }
         int temp=arr[i];
         arr[i]=arr[index];
         arr[index]=temp;
         //This set min at i
     }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    selectionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}