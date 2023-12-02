#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

void attack() {
    int n;
    cin >> n;
    vector < int > v(n), a(n);
    for(auto &i : v) cin >> i;
    sort(v.begin(), v.end());
    int j = 0;
    for(int i = 1; i < n; i += 2) a[i] = v[j++]; 
    for(int i = 0; i < n; i += 2) a[i] = v[j++]; 
    int cnt = 0;
    for(int i = 1; i < n - 1; i++) {
		if(a[i] < a[i - 1] and a[i] < a[i + 1]) cnt++;
	}
    cout << cnt << '\n';
    for(auto x : a) cout << x << ' ';
    cout << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;; 
    // cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}