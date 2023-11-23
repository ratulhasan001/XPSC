#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX = 1e6 + 5;
unordered_map<ll, bool> mp;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 2; i <= MAX; i++) {
        ll x = 1, sum = 1, cnt = 1;
        while (x <= MAX) {
            if (cnt >= 3) mp[sum] = true;
            x *= i;
            sum += x;
            cnt++;
        }
    }

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
        int n;
        cin >> n;
        if (n <= 6) cout << "NO" << '\n';
        else {
            cout << (mp[n] ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}