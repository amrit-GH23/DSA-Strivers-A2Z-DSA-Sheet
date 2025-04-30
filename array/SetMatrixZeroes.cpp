//Set Matrix Zeroes
//Time Complexity: O(n*m)
//Space Complexity: O(n+m)

#include <iostream>
#include <vector>
#include <set>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    set<int> rows;
    set<int> cols;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] == 0) {
                rows.insert(i);
                cols.insert(j);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(rows.count(i) || cols.count(j)) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));  

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    setZeroes(arr);  

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
