#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void attack() {
  int n, cnt = 0;
  cin >> n;
  if (n % 2 == 0) {
    int ans = n / 2;
    cout << ans << '\n';
    while (ans--) cout << "2 ";
  } else {
    n = n / 2 - 1;
    cnt = n + 1;
    cout << cnt << '\n';
    while (n--) {
      cout << "2 ";
    }
    cout << "3" << '\n';
  }
}

int32_t main() {

  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

//   int T;
//   cin >> T;
//   for (int testCase = 1; testCase <= T; testCase++) {

    attack();
    // cout << "Case " << testCase << ": " << ;
//   }
  return 0;
}