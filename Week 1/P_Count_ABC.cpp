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

    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < (int)s.size(); i++) {
        if(s[i] == 'A' and s[i + 1] == 'B' and s[i + 2] == 'C') {
            cnt++;
            i += 2;
        }
    }
    cout << cnt << '\n';
    return 0;
}