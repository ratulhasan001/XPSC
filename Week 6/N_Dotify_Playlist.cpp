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
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n, k, l;
        cin >> n >> k >> l; 
        vector<pair<int,int>>v;
        for(int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            v.emplace_back(a, b);
        }
        sort(v.rbegin(), v.rend());

        int sum = 0;
        for(auto [x, y] : v) {
            if(y == l) {
                sum += x;
                k--;
            }
            if(k == 0) break;
        }
        cout << (sum == 0 or k != 0 ? -1 : sum) << '\n';
    }
    return 0;
}