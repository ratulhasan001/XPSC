#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 31
#define debug_array(x,y) 31
#else
#include "deBUG.h"
#endif

void attack() {

	int n;
	cin >> n;
	vector< int > cnt(n + 1);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		cnt[x]++;
	}
	int mx = *max_element(cnt.begin(), cnt.end());
	int diff = n + 1 - count(cnt.begin(), cnt.end(), 0);
	debug(count(cnt.begin(), cnt.end(), 0));
	debug(cnt);
	debug(mx,diff);
	cout << max(min(mx - 1, diff), min(mx, diff - 1)) << '\n';
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