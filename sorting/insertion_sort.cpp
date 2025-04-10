//Insertion sort -Ascending Order
//Time complexity O(n^2)
//For best case O(n) (when the array is already sorted)
// Space complexity O(1)

#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
    int j=i;
     while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
      }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    insertionSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}