#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, ax, ay;
    ll a[4] = {0};
    cin >> n >> ax >> ay;
    while (n--) {
        ll x, y;
        cin >> x >> y;
        a[0] += (x > ax);
        a[1] += (x < ax);
        a[2] += (y < ay);
        a[3] += (y > ay);
    }
    ll mx = 0, s_mx = 0;
    for (int i = 0; i < 4; i++) {
        if (mx < a[i]) {
            mx = a[i];
            s_mx = i;
        }
    }
    cout << mx << "\n";
    if (s_mx == 0) {
        cout << ax + 1 << " " << ay << endl;
    } else if (s_mx == 1) {
        cout << ax - 1 << " " << ay << endl;
    } else if (s_mx == 2) {
        cout << ax << " " << ay - 1 << endl;
    } else {
        cout << ax << " " << ay + 1 << endl;
    }

    return 0;
}