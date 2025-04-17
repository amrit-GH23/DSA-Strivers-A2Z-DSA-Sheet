#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& arr) {
    int n=arr.size();
    int i=0;
    int j=0;
    int count=0;
    while(i<n){
        if(arr[i]!=0){
           arr[j]=arr[i];
            j++;
        }
        i++;
    }
    while(j<n){
        arr[j]=0;
        j++;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    moveZeroes(arr);
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}