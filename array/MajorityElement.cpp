//Majority Element
//Time Complexity : O(n)
//Space Complexity: O(n)

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int majorityElement(vector<int>& nums) {
    unordered_map<int,int>m;
    int n=nums.size();
    for(int i=0;i<n;i++){
        m[nums[i]]++;
    }
    for(auto i=m.begin();i!=m.end();i++){
        if(i->second>(n/2)){
            return i->first;
        }
    } 
    return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    };
   int ans= majorityElement(arr);
   cout<<ans<<"\n";
    return 0;
}