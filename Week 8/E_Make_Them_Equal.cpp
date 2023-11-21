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
        char c;
        string s;
        cin >> n >> c >> s;
        int cnt = 0;
        for(char x : s) cnt += (x == c);
        if(cnt == n) {
            cout << 0 << '\n';
            continue;
        } 
        bool ok = false;
        for(int i = n / 2; i < n; i++) {
            if(s[i] == c) {
                cout << 1 << '\n' << i + 1 << '\n';
                ok = true;
                break;
            }
        }
        if(ok) continue;
        cout << 2 << '\n' << n << ' ' << n - 1 << '\n';
    }
    return 0;
}