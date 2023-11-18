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
        cin >> n;
        vector<int>v(n);
        map<int,vector<int>>mp;
        for(int i =  0; i < n; i++) {
            cin >> v[i];
            mp[v[i]].push_back(i);
        }
        debug(mp);
        vector<int>b(n);
        int cnt = 0;
        for(auto [x, y] : mp) {
            if(y.size() < 2) {
                b[y[0]] = 1;
            }
            else {
                if(cnt == 0) {
                    b[y[0]] = 1;
                    for(int i = 1; i < y.size(); i++) b[y[i]] = 3;
                }
                else {
                    b[y[0]] = 1;
                    for(int i = 1; i < y.size(); i++) b[y[i]] = 2;
                }
                cnt++;
            }
        }
        if(cnt < 2) {
            cout << "-1" << '\n';
            continue;
        }
        for(auto x : b) cout << x << ' ';
        cout << '\n';


    }
    return 0;
}