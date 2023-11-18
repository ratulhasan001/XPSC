#include <bits/stdc++.h>

using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        float x, y;
        cin >> x >> y;
        float z = x / 2;
        if (y >= z) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}