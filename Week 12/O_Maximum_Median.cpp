#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 2e5 + 5;
int a[N], n, k, ans;

bool ok(int x) {
    ll sum = 0;
    for(int i = n / 2 + 1; i <= n; i++) if(a[i] < x ) sum += x - a[i];
    return sum <= k;
}
int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    int l = 0, r = 2e9, m;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    while(l <= r) {
        m = l + (r - l) / 2;
        ok(m) ? ans = m, l = m + 1 : r = m - 1;
    }
    cout << ans << '\n';
    return 0;
}