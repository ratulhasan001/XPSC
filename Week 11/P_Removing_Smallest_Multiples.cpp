#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

void attack() {
    int n;
    string s;
    cin >> n >> s;
    s = '$' + s;
    ll ans = 0;
    vector< bool > v(n + 1);
    for (int i = 1; i <= n; i++) {
      for (int j = i; j <= n; j += i) {
        if (s[j] == '1') break;
        if (v[j]) continue;
        v[j] = true;
        ans += i;
      }
    }
    cout << ans << "\n";
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