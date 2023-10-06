#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "DEBUG_TEMPLATE.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
        int n;
        cin >> n;
        int a[n];
        map<int,int>mp;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        int flag = 0;
        for(auto x : mp) {
            if(x.second >= 3) {
                cout << x.first << '\n';
                flag = 1;
                break;
            }
        }
        // debug(mp);
        if(flag == 0) cout << "-1" << '\n';
    }
    return 0;
}