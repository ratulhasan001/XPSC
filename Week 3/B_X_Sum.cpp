#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif


int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<vector<int>> mainDiagonals;
        vector<vector<int>> oppositeDiagonals;

        for (int d = 0; d < rows + cols - 1; d++) {
            vector<int> diagonal;
            int row, col;

            if (d < rows) {
                row = d;
                col = 0;
            } else {
                row = rows - 1;
                col = d - rows + 1;
            }

            while (row >= 0 && col < cols) {
                diagonal.push_back(matrix[row][col]);
                row--;
                col++;
            }

            mainDiagonals.push_back(diagonal);
        }

        for (int d = 0; d < rows + cols - 1; d++) {
            vector<int> diagonal;
            int row, col;

            if (d < rows) {
                row = d;
                col = cols - 1;
            } else {
                row = rows - 1;
                col = cols - (d - rows) - 2;
            }

            while (row >= 0 && col >= 0) {
                diagonal.push_back(matrix[row][col]);
                row--;
                col--;
            }

            oppositeDiagonals.push_back(diagonal);
        }
        vector<ll> ans;

    for (int i = 0; i < mainDiagonals.size(); i++) {
        for (int j = 0; j < oppositeDiagonals.size(); j++) {
            int sum = 0;
            for (int element : mainDiagonals[i]) {
                sum += element;
            }
            for (int element : oppositeDiagonals[j]) {
                sum += element;
            }
            ans.push_back(sum);
        }
    }
        ranges :: sort(ans);
        cout << ans[ans.size() - 1] << '\n';
        debug(ans);
    }
    return 0;
}
