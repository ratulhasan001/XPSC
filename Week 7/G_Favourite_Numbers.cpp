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
        if(n & 1 and n % 9 == 0) cout << "Bob" << '\n';
        else if( n % 2 == 0 and n % 7 == 0) cout << "Alice" << '\n';
        else cout << "Charlie" << '\n';
    }
    return 0;
}