#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int x, y;
        cin >> x >> y;
        int ok = x * y;
        cout << (ok % 3 == 0 ? ok / 3 : ok / 3 + 1) << '\n';
    }
    return 0;
}