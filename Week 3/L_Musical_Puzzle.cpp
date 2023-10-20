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
    for(int testCase=1; testCase <= T; testCase++) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;
        map<string,int>mp;
        for(int i = 0; i < n-1; i++) {
            mp[s.substr(i,2)]=1;
        }
        debug(mp);
        cout << mp.size() << '\n';
    }
    return 0;
}