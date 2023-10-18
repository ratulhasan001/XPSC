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
        vector<int> a(n);
        map<int, int> mp;
        set<int> s;
        for (int &i : a) {
            cin >> i;
            mp[i]++;
            s.insert(i);
            s.insert(i + 1);
        }
        int last = 0;
        int ans = 0;
        for (auto x: s) {
            int c = mp[x];
            ans += max(0, c - last);
            last = c;
        }
        cout << ans << '\n';
        }
    return 0;
}
