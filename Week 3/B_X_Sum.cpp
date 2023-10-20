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
    
        int n, m;
	    cin >> n >> m;
	    int a[n][m];
	    for(int i = 0; i < n; i++) {
	    	for(int j = 0; j < m; j++) {
	    		cin >> a[i][j];
	    	}
	    }
	    int mx = 0;
	    for(int i = 0; i < n; i++) {
	    	for(int j = 0; j < m; j++) {
	    		int now = 0;
	    		int ci = i, cj = j;
	    		while(ci >= 0 && ci < n && cj >= 0 && cj < m) {
	    			now+=a[ci][cj];
	    			ci--;
	    			cj--;
	    		}
	    		ci = i, cj = j;
	    		while(ci >= 0 && ci < n && cj >= 0 && cj < m) {
	    			now+=a[ci][cj];
	    			ci++;
	    			cj--;
	    		}
	    		ci = i, cj = j;
	    		while(ci >= 0 && ci < n && cj >= 0 && cj < m) {
	    			now+=a[ci][cj];
	    			ci--;
	    			cj++;
	    		}
	    		ci = i, cj = j;
	    		while(ci >= 0 && ci < n && cj >= 0 && cj < m) {
	    			now+=a[ci][cj];
	    			ci++;
	    			cj++;
	    		}
	    		now-=a[i][j]*3;
	    		mx = max(mx, now);
	    	}
	    }
	    cout << mx << endl;
    }
    return 0;
}
