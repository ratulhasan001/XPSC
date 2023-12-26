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
    int n;
    cin >> n;
    vector < int > a(n);
    for (auto &i : a) cin >> i;
    ll ans = 0, x = 0;
    for (int i = 2; i < n; i++) x += a[i] * (a[i] > 0);
    ans = max(ans, x);
    x = a[0];
    for (int i = 1; i < n; i++) x += a[i] * (a[i] > 0);
    cout << max(ans, x) << "\n";
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