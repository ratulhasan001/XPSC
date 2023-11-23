#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        ll x, y;
        cin >> x >> y;
        cout << -(x * x) << " " << y * y << '\n';
    }
    return 0;
}