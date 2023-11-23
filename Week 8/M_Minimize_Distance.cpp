#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n, k; 
        cin >> n >> k;
        vector<int> a, b;
        for (int i = 1; i <= n; i++) {
          int x; cin >> x;
          if (x > 0) a.push_back(x);
          else if (x < 0) b.push_back(abs(x));
        }
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        ll ans = 0;
        for (int i = 0; i < a.size(); i += k) ans += 2 * a[i];
        for (int i = 0; i < b.size(); i += k) ans += 2 * b[i];

        ans -= max((!a.empty() ? a[0] : 0), (!b.empty() ? b[0] : 0));
        cout << ans << '\n';
    }
    return 0;
}