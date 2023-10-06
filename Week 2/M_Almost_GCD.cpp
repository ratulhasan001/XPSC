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

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int mx = a[n - 1], ans = INT_MIN, final;
    for(int i = 2; i <= mx; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(a[j] % i == 0) cnt++;
        }
        if(cnt > ans) {
            ans = cnt;
            final = i;
        }
    }
    cout << final << '\n';
    return 0;
}