//Check if Array Is Sorted and Rotated
// Solution : Time complexity: O(n)
// Space complexity : O(1)

#include<iostream>
#include<vector>

using namespace std;

bool Check(vector<int>&a,int n){
    
     int count=0; //Counts the number of times the pattern breaks.

     for(int i=0;i+1<n;i++){
        if(a[i]>a[i+1])count++;
     } 

     if(a[n-1]>a[0])count++; 

     return count<=1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    bool ans =Check(arr,n);
   cout<<ans;

    return 0;
}