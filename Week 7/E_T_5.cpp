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
    int n, cnt = 0;
    cin >> n;
    if (n % 2 == 0) {
        int ans = n / 2;
        cout << ans << '\n';
        while (ans--) cout << "2 ";
    } else {
        n = n / 2 - 1;
        cnt = n + 1;
        cout << cnt << '\n';
        while (n--) {
            cout << "2 ";
        }
        cout << "3" << '\n';
    }
    return 0;
}