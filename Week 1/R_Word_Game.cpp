#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pi = pair<int,int>;

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
        
        vector<string>v[3];
        vector<int>cnt;
        map<string,int>mp;
        int n; cin >> n;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < n; j++) {
                string s;
                cin >> s;
                mp[s]++;
                v[i].push_back(s);
            }
        }
        debug(mp);
        for(int i = 0; i < 3; i++) {
            int sum = 0;
            for(int j = 0; j < n; j++) {
                if(mp[v[i][j]] == 1) sum += 3;
                else if(mp[v[i][j]] == 2) sum += 1;
                else if(mp[v[i][j]] == 3) sum += 0;
            }
            cnt.push_back(sum);
        }
        debug(cnt);
        for(auto x : cnt) cout << x << " ";
        cout << '\n';

    }
    return 0;
}