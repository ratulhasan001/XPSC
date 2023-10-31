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
        string s;
        cin >> s;
        map<int,char>mp;
        int i = 0;
        for(char c = 'a'; c <= 'z' ; c++) mp[++i] = c;
        // debug(mp);
        string ans;
        for(int i = n - 1; i >= 0; i--) {
            if(s[i] == '0') {
                string ok;
                ok.push_back(s[i - 2]);
                ok.push_back(s[i - 1]);
                ans += mp[stoi(ok)];
                i -= 2;
            }
            else ans += mp[s[i] - '0'];
        }
        ranges :: reverse(ans);
        cout << ans << '\n';
    }
    return 0;
}