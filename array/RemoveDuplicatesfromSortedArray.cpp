//Remove Duplicates from Sorted Array
//Solution : Time Complexity: O(n)
//Space complexity: O(1)

#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;

    int j = 1; 

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[j] = arr[i];
            j++;
        }
    }
    return j;
}


int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   int ans =removeDuplicates(arr);
   for(int i=0;i<ans;i++){
    cout<<arr[i]<<" ";
   }
    return 0;
}