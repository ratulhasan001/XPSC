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
    int ans = -1;
    for (int i = 0; i < n; i++) {
        int a = 0, b = 0, c = 0;
        for (int j = i; j < min(n, i + 20); j++) {
            a += (s[j] == 'a');
            b += (s[j] == 'b');
            c += (s[j] == 'c');
            if (a > b and a > c and j - i + 1 >= 2) {
                if (ans == -1) ans = j - i + 1;
                ans = min(ans, j - i + 1);
            }
        }
    }
    cout << ans << "\n";
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}