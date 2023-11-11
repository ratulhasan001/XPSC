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
        cin >> n;
        vector < int > v(n);
        for(int &i : v) cin >> i;
        map < int, int > spf;
        for (int j = 0; j < n; j++) {
 
            int now = v[j];
            for (int i = 2; i * i <= now;i++) {
                while (now % i == 0) {
                    spf[i]++;
                    now /= i;
                }
            }
            if (now > 1) {
                spf[now]++;
            }
        }
        bool ok = true;
        for (auto [x, y] : spf) {
            if (y % n != 0) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}