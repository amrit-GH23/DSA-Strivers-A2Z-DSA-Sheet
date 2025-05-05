//Maximum Product Subarray
//Time Complexity: O(n)
//Space Complexity: O(1)

#include<iostream>
#include<vector>

using namespace std;

int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int leftProduct = 1, rightProduct = 1;
    int ans = nums[0]; 

    for (int i = 0; i < n; i++) {
        leftProduct *= nums[i];
        rightProduct *= nums[n - 1 - i];

        ans = max(ans, max(leftProduct, rightProduct));

        if (leftProduct == 0) leftProduct = 1;
        if (rightProduct == 0) rightProduct = 1;
    }

    return ans;
}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);  

        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }
    
    int ans=maxProduct(arr);  
     
    cout<<ans<<"\n";

    return 0;
}
