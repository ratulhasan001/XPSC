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
    ll n, x, y;
    cin >> n;
    vector < ll > v;
    x = 2 * n, y = 2;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            v.push_back(x);
            x -= 2;
        }

        else {
            v.push_back(y);
            y += 2;
        }
    }
    for (auto x: v) cout << x << " ";
    cout << '\n';
    for (int i = 1; i < n; i++) cout << v[i] - 1 << " ";
    cout << 2 * n - 1 << '\n';
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