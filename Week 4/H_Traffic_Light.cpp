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
        char c;
        string s;
        cin >> n >> c >> s;
        s += s;
        vector<int>gIndex, cIndex;
        for(int i = 0; i < n*2 ; i++) {
            if (s[i] == 'g') gIndex.push_back(i);
            if(s[i] == c) cIndex.push_back(i);
        }
        int ans = 0;
        for(auto x : cIndex) {
            if(x >= n) break;
            int pos = lower_bound(gIndex.begin(), gIndex.end(), x) - gIndex.begin();
            ans = max(ans, abs(gIndex[pos] - x));
        }
        cout << ans << '\n';
    }
    return 0;
}