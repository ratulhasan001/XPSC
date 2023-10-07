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
    map<int,int>mp;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    for(auto x : mp) if(x.second == 1) cout << x.first << '\n';
    return 0;
}