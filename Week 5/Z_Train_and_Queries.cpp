#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
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
    for(int testCase=1; testCase <= T; testCase++) {
    
        int n, q;
        cin >> n >> q;
        map<int,pii>mp;
        for(int i = 0 ; i < n; i++) {
            int x;
            cin >> x;
            if(!mp.count(x)) {
                mp[x].first = i;
                mp[x].second = i;
            }
            else mp[x].second = i;
        }   
        debug(mp);
        while(q--) {
            int a, b;
            cin >> a >> b;
            if(!mp.count(a) or !mp.count(b) or mp[a].first > mp[b].second) cout << "NO" << '\n';
            else cout << "YES" << '\n';
        }

    }
    return 0;
}