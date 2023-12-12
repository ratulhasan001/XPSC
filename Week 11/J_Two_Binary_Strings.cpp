#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

void attack() {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
        cout << "YES\n";
        return;
    }
    int sz = s1.size(), flag = 0;
    for (int i = 1; i < sz; i++) {
        if (s1[i] == '1'
            and s2[i] == '1'
            and s1[i - 1] == '0'
            and s2[i - 1] == '0') {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO" << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}