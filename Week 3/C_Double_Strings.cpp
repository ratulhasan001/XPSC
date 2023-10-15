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
        vector<string>v(n);
        map <string,bool> mp;
        for(string &i : v) {
            cin >> i;
            mp[i] = true;
        }
        for(int i = 0; i < n; i++) {
            bool ok = false;
            for(int j = 1; j < v[i].size(); j++) {
                string check1 = v[i].substr(0, j), check2 = v[i].substr(j, v[i].size() - j);
                ok |= (mp[check1] & mp[check2]);
            }
            cout << ok;
        }
        cout << "\n";

    }
    return 0;
}