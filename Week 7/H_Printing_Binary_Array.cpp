#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n;
        cin >> n;
        vector < int > v(n);
        for(int &i : v) cin >> i;

        for(auto x : v) {
            if(x == 0) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << '\n';
    }
    return 0;
}