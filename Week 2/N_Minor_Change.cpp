#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "DEBUG_TEMPLATE.h"
#endif

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, k;
    cin >> s >> k;
    int cnt = 0;
    for(int i = 0 ; i < (int)s.size(); i++) {
        if(s[i] != k[i]) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}