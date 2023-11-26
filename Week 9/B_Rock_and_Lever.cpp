#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        ll ans = 0;
        for (int j = 30; j >= 0; j--) {
            ll cnt = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] >= (1 << j) and a[i] < (1 << (j + 1))) cnt++;
            }
            ans += cnt * (cnt - 1) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}