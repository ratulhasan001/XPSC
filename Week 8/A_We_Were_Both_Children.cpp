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
    vector < int > ans(n + 1, 0);
    map < int, int > m;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      m[a[i]]++;
    }
    for (auto x: m) {
      for (int i = x.first; i <= n; i += x.first) {
        ans[i] += x.second;
        // cerr<<ans[i]<<'\n';
      }
    }
    debug(m);
    debug(ans);
    int mx = * max_element(ans.begin(), ans.end());
    cout << mx << '\n';
  }
  return 0;
}