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

    int s, t, cnt = 0;
    cin >> s >> t;

    for(int i = 0; i <= s; i++) {
        for(int j = 0; j <= s; j++) {
            for(int k = 0; k <= s; k++) {
                if(i + j + k <= s and i * j * k <= t) cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}