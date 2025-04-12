// // Merge Sort Algorithm
// // Time Complexity: O(n log n)
// // Space Complexity: O(n)

#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr,int l,int mid,int h){
       vector<int>b;
       int i=l;
       int j=mid+1;
       while(i<=mid && j<=h){
         if(arr[i]<arr[j]){
             b.push_back(arr[i]);
             i++;
         }
         else{
            b.push_back(arr[j]);
            j++;
         }
       }
       while(i<=mid){
         b.push_back(arr[i]);
         i++;
       }
       while(j<=h){
         b.push_back(arr[j]);
         j++;
       }
       for(int i=l;i<=h;i++){
          arr[i]=b[i-l];
       }
}

void mergeSort(vector<int>&arr,int l,int h){
       if(l>=h){
        return ;
       }
       int mid=(l+h)/2;
       mergeSort(arr,l,mid);
       mergeSort(arr,mid+1,h);
       merge(arr,l,mid,h);
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    mergeSort(arr, 0, arr.size() - 1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
