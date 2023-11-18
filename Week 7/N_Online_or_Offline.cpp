#include <bits/stdc++.h>

using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        double n, m, d;
        cin >> n >> m;
        d = (0.1) * n;
        n = n - d;
        if (n < m)
            cout << "ONLINE" << '\n';
        else if (n == m)
            cout << "EITHER" << '\n';
        else
            cout << "DINING" << '\n';
    }
    return 0;
}