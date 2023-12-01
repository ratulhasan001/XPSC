#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void attack() {
    ll n;
    cin >> n;
    ll a[n], b[n];
    vector < ll > v_minimum, v_maxi;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int j = 0;
    for (int i = 0; i < n; i++) {
        while (a[i] > b[j]) j++;
        v_minimum.push_back(b[j] - a[i]);
    }
    j = n - 1;
    for (int i = n - 1; i >= 0; i--) {
        v_maxi.push_back(b[j] - a[i]);
        if (a[i] > b[i - 1]) j = i - 1;
    }
    for (auto x: v_minimum) cout << x << " ";
    cout << '\n';
    for (int i = n - 1; i >= 0; i--) cout << v_maxi[i] << " ";
    cout << '\n';
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