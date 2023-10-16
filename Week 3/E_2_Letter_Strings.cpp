#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

bool ok(string s, string x) {
    int cnt = 0;
    if(s[0] != x[0]) cnt++;
    if(s[1] != x[1]) cnt++;
    return cnt == 1;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
        int n; cin >> n;

        vector<string>v(n);
        map <string,ll> mp;
        ll cnt = 0;
        for(string &i : v) {
            cin >> i;
            mp[i]++;
        }
        debug(mp);
        for(auto x : mp) {
            for(auto y : mp) {
                if(x.first[0] == y.first[0] and x.first[1] != y.first[1]) {
                    cnt += (x.second * y.second);
                    debug(cnt);
                }
                if(x.first[0] != y.first[0] and x.first[1] == y.first[1]) {
                    cnt += (x.second * y.second);
                    debug(cnt);
                }
            }
        }
        
        cout << cnt/2 << '\n';
        
    }
    return 0;
}