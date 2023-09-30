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

    int T, k,cnt = 0; 
    cin >> T >> k;
    for(int testCase=1; testCase <= T; testCase++) {
    
        int x; cin >> x;
        if(x % k == 0) cnt++;
    }
    cout << cnt << '\n';

    return 0;
}