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

    string s;
    cin >> s;
    for(int i = 0; i < (int)s.size(); i++) {
        if((i + 1) % 2 == 1) cout << s[i] ;
    }
    return 0;
}