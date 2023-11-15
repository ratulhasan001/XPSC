#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
        ll n, m, sum = 0;
        cin >> n >> m;
        vector < ll > a(n + m);
        for(auto &i : a) cin >> i;
        sort(a.begin(), a.end() - 1);
        reverse(a.begin(), a.end());
        for(int i = 0; i < n; i++) sum += a[i];
        cout << sum << '\n';

    }
    return 0;
}