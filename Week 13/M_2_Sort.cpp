#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

void attack() {
    int n, k;
    cin >> n >> k;
    vector < ll > v(n), ss(n);
    for (auto & i: v) cin >> i;
    int ans = 0;

    for (int i = 1; i < n; i++) {
        if (v[i] * 2 <= v[i - 1])
            ss[i] = 1;

    }
    for (int i = 1; i < n; i++) ss[i] += ss[i - 1];

    for (int i = 0; i < n - k; i++) {
        if (ss[i + k] - ss[i] == 0) ans++;
    }
    cout << ans << "\n";
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}