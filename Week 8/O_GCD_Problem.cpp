#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n;
	    cin >> n;
	    if (n % 2 == 0) cout << "2" << " " << (n - 1) - 2 << " " << "1" << '\n';
	    else {
	    	int x = (n - 1) / 2;
	    	if (x % 2 == 0) cout << x - 1 << " " << x + 1 << " " << 1 << '\n';
	    	else cout << x - 2 << " " << x + 2 << " " << 1 << '\n';
	    }
    }
    return 0;
}