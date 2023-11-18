#include <bits/stdc++.h>

using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        int n;
        cin >> n;
        int x = n * 4;
        if (x <= 1000) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}