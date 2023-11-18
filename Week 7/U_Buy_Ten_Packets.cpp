#include <bits/stdc++.h>

using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {
        int x, y;
        cin >> x >> y;
        cout << ((2 * y) + (x * 1)) << '\n';
    }
    return 0;
}