#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair < int, int >;

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
        vector < int > v(n);
        map < int, int > mp;
        for(auto &i : v) {
            cin >> i;
            mp[i]++;
        }
        if(mp.size() == 1) {
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
        vector < pii > road;
        map < int, bool > save;
        vector < int > first, last;
        for(int i = 0 ; i < n; i++) {
            if(v[0] != v[i]) {
                road.emplace_back(1, i + 1);
                save[i + 1] = true;
            }
            else last.push_back(i + 1);
        }
        reverse(last.begin(), last.end());
        save[1] = true;
        debug(road);
        debug(save);
        if((int)road.size() != n - 1) {
            int another = -1;
            for(int i = 1; i < n; i++) {
                // if(v[i] == another) continue;
                if(v[i] != v[0]) {
                    another = i + 1;
                }
            }
            for(int i = 0; i < last.size(); i++) {
                road.emplace_back(last[i], another);
                if(road.size() == n - 1) break;
            }
        }
        for(auto [x, y] : road) cout << x << " " << y << '\n';
    }
    return 0;
}