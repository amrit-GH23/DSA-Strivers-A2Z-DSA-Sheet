//Best Time to Buy and Sell Stock
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int low=prices[0];
    int maxi=0;
    int curr=0;
    for(int i=1;i<n;i++){
        if(low>prices[i]){
            low=prices[i];
        }
        curr=prices[i]-low;
        maxi=max(maxi,curr);
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
    
    int ans =maxProfit(arr);
    cout<<ans;

    return 0;
}