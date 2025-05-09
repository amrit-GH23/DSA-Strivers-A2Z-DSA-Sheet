//Longest Subarray with Sum K
//Time Complexity: O(n)
//Space Complexity: O(n)

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int longestSubarray(vector<int>& arr, int k) {
    int n=arr.size();
    unordered_map<int,int>m;
    int maxlen=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k)maxlen=max(maxlen,i+1);
        int rem=sum-k;
        if(m.find(rem)!=m.end()){
            maxlen=max(maxlen,i+1-m[rem]);
        }
        if(m.find(sum)==m.end())m[sum]=i+1;
    }
    return maxlen;
}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);  

        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }

    int k;
    cin>>k;
    
    int ans=longestSubarray(arr,k);  
     
    cout<<ans<<"\n";

    return 0;
}
