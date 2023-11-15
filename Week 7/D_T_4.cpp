#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {

        ll a, b;
        cin >> a >> b;

        bool ok = true;
        ll g = __gcd(a, b);
        while (b > 1) {
            if(g == 1) {
                ok = false;
                break;
            }
            b = b / g;
            g = __gcd(b, g);
        }
        cout << (ok ? "Yes" : "No") << '\n';
    }
    return 0;
}