//Longest Consecutive Sequence
//Time Complexity: O(n)
//Space Complexity: O(n)

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;

    for (int num : numSet) {
        if (numSet.find(num - 1) == numSet.end()) {
            int length = 1;

            while (numSet.find(num + length) != numSet.end()) {
                length++;
            }

            longest = max(longest, length);
        }
    }
    return longest;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans =longestConsecutive(arr);
    cout<<ans;

    return 0;
}