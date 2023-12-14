#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

ll cnt(vector< int >& a) {
    ll zero = 0, ans = 0;
    for(int i = (int)a.size() - 1; i >= 0; i--) {
        if(a[i] == 0) zero++;
        else ans += zero;
    }
    return ans;
}

void attack() {
    int n; 
    cin >> n;
    vector< int > a(n);
    for(int &i : a) cin >> i;
    ll ans = cnt(a);
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            a[i] = 1;
            ans = max(ans, cnt(a));
            a[i] = 0;
            break;
        }
    }
    for(int i = n - 1; i >= 0; --i) {
        if(a[i] == 1) {
            a[i] = 0;
            ans = max(ans, cnt(a));
            a[i] = 1;
            break;
        }
    }
    cout << ans << "\n";
    
    
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