#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
	    ll n; 
        cin >> n;
	    ll a[n], g1, g2;
	    for(int i = 0; i < n; i++) cin >> a[i];
	    g1 = *max_element(a, a + n);
	    int c1 = 0, c2 = 0;
	    while(g1 > 0){
	        g1 /= 2;
	        c1++;
	    }
	    g2= pow(2, c1 - 1);
	    for(int i = 0; i < n; i++){
	        if(a[i] >= g2) c2++;
	    }
	    if(c2 % 2 == 1) cout<< (c2 / 2) + 1 <<  '\n';
	    else cout << c2 / 2 << '\n';

    }
    return 0;
}