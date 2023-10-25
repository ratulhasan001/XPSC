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

    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n ; i++) {
        cin >> a[i];
    }
    int ans = 0;
    for(int mask = 0; mask < (1 << n); mask++) {
        int rot = 0;
        for(int i = 0; i < n; i++) {
            if((mask >> i) & 1) {
                rot += a[i];
            }
            else rot -= a[i];
        }
        rot %= 360;
        rot = abs(rot);
        if(rot == 0) {
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';

    return 0;
}