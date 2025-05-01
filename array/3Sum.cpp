//3sum
// time complexity: O(n^2)
// space complexity: O(1) (ignoring output storage)

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; 

        int low = i + 1, high = n - 1;
        while (low < high) {
            int sum = nums[i] + nums[low] + nums[high];
            if (sum == 0) {
                ans.push_back({nums[i], nums[low], nums[high]});
                while (low < high && nums[low] == nums[low + 1]) low++;  
                while (low < high && nums[high] == nums[high - 1]) high--; 
                low++;
                high--;
            }
            else if (sum < 0) {
                low++;
            }
            else {
                high--;
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    vector<vector<int>> ans =threeSum(arr);
    for(int i=0;i<ans.size();i++){     
       for(int j=0;j<3;j++){
        cout<<ans[i][j]<<" ";
       }
       cout<<"\n";
    }

    return 0;
}