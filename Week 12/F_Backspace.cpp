#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

void attack() {
    string s, t;
    cin >> s >> t;
    int ss = s.size(), tt = t.size();
    if(tt > ss) {
        cout << "NO" << '\n';
        return;
    }
    while(true) {
        if(t.empty()) {
            cout << "YES" << '\n';
            return;
        }
        if(s.empty()) {
            cout << "NO" << '\n';
            return;
        }
        if(s.back() == t.back()) s.pop_back(), t.pop_back();
        else {
            s.pop_back();
            if(s.size()) s.pop_back();
        }
    }
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}