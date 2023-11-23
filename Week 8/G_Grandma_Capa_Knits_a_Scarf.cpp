#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
        int n;
        string s;
        cin >> n >> s;
        int ans = n + 1;
        for (int c = 0; c < 26; ++c) {
            int l = 0, r = n - 1, cnt = 0;
            while (l <= r) {
                if (s[l] == s[r]) {
                    l++, r--;
                }
                else if (s[l] == char('a' + c)) {
                    cnt++, l++;
                }
                else if (s[r] == char('a' + c)) {
                    cnt++, r--;
                }
                else {
                    cnt = n + 1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans == n + 1) ans = -1;
        cout << ans << '\n';
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}