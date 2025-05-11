//Majority Element II
//Time Complexity; O(n)
//Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int candidate1 = 0, candidate2 = 0;
    int count1 = 0, count2 = 0;
    vector<int> ans;
    for (int num : nums)
    {
        if (num == candidate1)
            count1++;
        else if (num == candidate2)
        {
            count2++;
        }
        else if (count1 == 0)
        {
            candidate1 = num;
            count1++;
        }
        else if (count2 == 0 && num != candidate1)
        {
            candidate2 = num;
            count2++;
        }
        else
        {
            count1--;
            count2--;
        }
    }
    if (count(nums.begin(), nums.end(), candidate1) > n / 3)
        ans.push_back(candidate1);
    if (count(nums.begin(), nums.end(), candidate2) > n / 3 && candidate1 != candidate2)
        ans.push_back(candidate2);
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

vector<int>ans = majorityElement(arr);

  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }

    return 0;
}