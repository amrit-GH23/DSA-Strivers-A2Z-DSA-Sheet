//bubble sort -Ascending Order
//Time complexity O(n^2)
//For best case O(n) (when the array is already sorted)
// Space complexity O(1)

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>&arr,int n){
     for(int i=0;i<n-1;i++){
        bool sorted=true;
        for(int j=0;j+1<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                sorted=false;
            }   
        }
        if(sorted){
            break;
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
    
    bubbleSort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}