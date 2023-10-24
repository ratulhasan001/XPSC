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
        vector<int>v(n);
        map<int,int>mp;
        for(int &i : v) {
            cin >> i;
        }
        for(int i = n - 1; i >= 0; i--) {
            if(mp[v[i]] == 1) break;
            else mp[v[i]]++;
        }
        cout << n - mp.size() << '\n';
    }
    return 0;
}