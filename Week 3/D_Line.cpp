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
	    ll ans = 0;
	    vector<ll> v;
	    for (int i = 0; i < n; i++) {
	    	if (s[i] == 'L') {
	    		v.push_back((n - 1 - i) - i);
	    		ans += i;
                debug(ans);
                debug(n - i - 1, i);
	    	}
	    	else {
	    		v.push_back(i - (n - 1 - i));
	    		ans += n - 1 - i;
                debug(ans);
                debug(n - i - 1, i);
	    	}
	    }
	    ranges :: sort(v);
        ranges :: reverse(v);
        debug(v,ans);
	    for (int i = 0; i < n; i++) {
	    	if (v[i] > 0) ans += v[i];
            cout << ans << ' ';
            debug(ans);
	    }
	    cout << '\n';
    }
    return 0;
}