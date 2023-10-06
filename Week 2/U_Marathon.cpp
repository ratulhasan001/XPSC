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
        int a[4], cnt = 0;
        for(int i = 0; i < 4; i++) cin >> a[i];
        for(int i = 1; i < 4; i++) if(a[i] > a[0]) cnt++;
        cout << cnt << '\n';
        
    }
    return 0;
}