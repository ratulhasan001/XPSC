#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

int n, m, k;

bool ok(int x, int y) {
    int cnt = __builtin_popcount(x ^ y);
    return cnt <= k;
    
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    int sum = 0;
    int a[m + 2];
    for(int i = 1; i <= m + 1; i++) {
        cin >> a[i];
    }
    for(int  i = 1; i < m + 1; i++) {
        sum += ok(a[i], a[m + 1]);
    }
    cout << sum << '\n';

    return 0;
}