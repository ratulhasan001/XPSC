#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#else
#include "DEBUG_TEMPLATE.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string check = "abcdefghijklmnopqrstuvwxyz", s, s2, ans;
    cin >> s;
    ranges :: sort(s);
    for(int i = 0 ; i < (int)s.size(); i++) if(s[i] != s[i + 1]) s2 += s[i]; 

    for(int i = 0; i < (int)check.size(); i++) {
        if(check[i] != s2[i]) {
            ans += check[i];
        }
    }
    if(ans.empty()) cout << "None\n";
    else cout << ans[0] << '\n';
    return 0;
}