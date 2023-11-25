#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        int n;
        cin >> n;
        int v[n + 1], ans[n + 1];
        for (int i = 1; i <= n; i++) cin >> v[i];
        ans[1] = v[1];
        bool ok = true;
        for (int i = 2; i <= n; i++) {
            if (v[i] != 0 and ans[i - 1] - v[i] >= 0) {
                ok = false;
                break;
            }
            ans[i] = ans[i - 1] + v[i];
        }
        if (!ok) {
            cout << -1 << '\n';
        } else {
            for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
            cout << '\n';
        }
    }
    return 0;
}