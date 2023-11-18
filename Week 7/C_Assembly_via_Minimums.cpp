#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        ll n;
        cin >> n;
        ll x = (n * (n - 1)) / 2;
        ll a[x];
        for (ll i = 0; i < x; i++) {
            cin >> a[i];
        }
        sort(a, a + x);
        for (int i = 0; i < x; i += --n) {
            cout << a[i] << ' ';
        }
        cout << "1000000000\n";
    }
    return 0;
}