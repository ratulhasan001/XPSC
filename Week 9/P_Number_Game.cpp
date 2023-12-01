#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void attack() {
    int n;
    cin >> n;

    int a[n], tmp[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tmp[i] = a[i];
    }

    int ans = 0;
    sort(tmp, tmp + n);
    for (int lim = n; lim >= 0; lim--) {
        int pos = 0;
        for (int i = 0; i < n; i++) {
            a[i] = tmp[i];
            if (a[i] <= lim) pos = i;
        }
        int cnt = 0;
        int val = lim;
        for (int i = pos, j = 0; j <= i; i--) {
            if (a[i] <= val) {
                cnt++;
                a[j] += val;
                val--;
                j++;
            }
        }
        if (cnt >= lim) {
            ans = max(ans, cnt);
        }
    }

    cout << ans << "\n";
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}