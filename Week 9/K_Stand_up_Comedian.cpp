#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a == 0) {
            cout << 1 << '\n';
            continue;
        }
        cout << a + min(b, c) * 2 + min(a + 1, abs(b - c) + d) << '\n';

    }
    return 0;
}