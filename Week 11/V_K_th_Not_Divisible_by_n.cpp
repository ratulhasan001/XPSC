#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

int n, k;
bool ok(int x) { 
  return x - x / n >= k;
}

void attack() {
    cin >> n >> k;
    int left = 1, right = 2e9, ans = 0;
    while (left <= right) {
      int mid = left + (right - left) / 2;
      if (ok(mid)) {
        ans = mid;
        right = mid - 1;
      }
      else {
        left = mid + 1;
      }
    }
    cout << ans << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}