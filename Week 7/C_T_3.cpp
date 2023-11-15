#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l, r;
    cin >> l >> r;
    cout << "YES" <<  '\n';
    for(ll i = l; i <= r; i += 2) cout << i << " " << i + 1 << '\n';
    return 0;
}