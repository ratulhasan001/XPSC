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

    int n;
    cin >> n;
    deque<string>d;
    map<string,int>mp;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        d.push_front(s);
    }
    debug(d);
    for(auto x : d) {
        if(mp[x] != 0) continue;
        mp[x]++;
        int y = x.size();
        cout << x[y - 2] << x[y - 1];
    }
    cout << '\n';
    return 0;
}