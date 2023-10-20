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
        vector<int>v(4);
        for(int i = 0; i < 4; i++) cin >> v[i];
        auto mx = max_element(v.begin(), v.end()) - v.begin();
        auto mn = min_element(v.begin(), v.end()) - v.begin();
        cout << (mx + mn == 3 ? "YES" : "NO") << '\n';
    }
    return 0;
}