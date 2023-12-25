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
    int n;
    string s;
    cin >> n >> s;
    string temp = s;
    vector < int > ans;
    bool ok = false;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'W') {
            ans.push_back(i + 1);
            if (s[i + 1] == 'B') s[i + 1] = 'W';
            else s[i + 1] = 'B';
        }
    }
    if (s[n - 1] == 'B') ok = true;
    if (s[n - 1] == 'W') {
        s = temp;
        ans.clear();
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == 'B') {
                ans.push_back(i + 1);
                if (s[i + 1] == 'W') s[i + 1] = 'B';
                else s[i + 1] = 'W';
            }
        }
        if (s[n - 1] == 'W') ok = true;
    }
    if (!ok) cout << -1 << "\n";
    else {
        cout << ans.size() << "\n";
        for (int i = 0; i < (int)ans.size(); i++) cout << ans[i] << " ";\
        cout << "\n";
    }
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1; 
    // cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}