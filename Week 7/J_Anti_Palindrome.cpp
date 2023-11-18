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
        string s, tmp;
        cin >> n >> s;
        tmp = s;
        reverse(tmp.begin(), tmp.end());
        if(tmp != s) {
            cout << 0 << '\n';
            continue;
        }
        map < char, int > mp;
        for(char c : s) mp[c]++;
        if(mp.size() == 1) {
            if(n % 2 == 0) cout << 1 << '\n';
            else cout << 2 << '\n';
        }
        else cout << 1 << '\n';
    }
    return 0;
}