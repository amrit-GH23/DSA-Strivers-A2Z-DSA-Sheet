//Merge Sorted Array
//Time Complexity : O(n+m)
//Space Complexity: O(1)

#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int midx = m - 1;
        int nidx = n - 1;
        int right = m + n - 1;

        while (nidx >= 0) {
            if (midx >= 0 && nums1[midx] > nums2[nidx]) {
                nums1[right] = nums1[midx];
                midx--;
            } else {
                nums1[right] = nums2[nidx];
                nidx--;
            }
            right--;
        }        
    }

int main(){
    int n,m;
    cin>>m>>n;
    vector<int>nums1(m+n,0);
    vector<int>nums2(n);
    for(int i=0;i<m;i++){
        cin>>nums1[i];
    }
    for(int i=0;i<n;i++){
        cin>>nums2[i];
    }
   merge(nums1,m,nums2,n);
   for(int i=0;i<n+m;i++){
    cout<<nums1[i]<<" ";
   }
    return 0;
}