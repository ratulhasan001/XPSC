#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

const int N = 1e5 + 5;
ll a[N], b[N], n, k;

bool ok(ll m){
	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum += max(0LL, a[i] * m - b[i]);
		if(sum > k) return false;
	}
	return sum <= k;
}

void attack() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    ll l = 0, r = 2e9, m, ans = -1;
    while(l <= r) {
        m = l + (r - l) / 2;
        ok(m) ? ans = m, l = m + 1 : r = m - 1;
    }
    cout << ans << '\n';
    
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