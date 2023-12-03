#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void attack() {
  ll n;
  char x;
  cin >> n;
  vector < vector < int >> v(n + 1);
  for (int i = 1; i <= n; i++) {
    v[i].push_back(i);
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> x;
      if (x == '1') {
        v[j].push_back(i);
      }
    }
  }
  for (int i = 1; i <= n; i++) {
    cout << (int) v[i].size() << ' ';
    for (auto it: v[i]) {
      cout << it << ' ';
    }
    cout << '\n';
  }
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