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
        
        int n;
        cin >> n;
        vector<vector<int>> perm(n, vector<int>(n - 1));
        vector<int>p(n, 0);
        vector<int>cnt(n + 1, 0);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n - 1; j++) {
                cin >> perm[i][j];
                if(j == 0) cnt[perm[i][j]]++; // first column element count
            }
        }
        debug(cnt);
        for(int i = 1; i <= n; i++){ // n - 1 time element
            if(cnt[i] == n - 1){
                p[0] = i;
                break;
            }
        }
        debug(p);
        for(int i = 0; i < n; i++){
            if(perm[i][0] != p[0]){
                for(int j = 0; j < n - 1; j++){
                    p[j + 1] = perm[i][j];
                }
            }
        }
        debug(p);
        for(auto x : p) cout << x << ' ';
        cout << '\n';

    }
    return 0;
}
