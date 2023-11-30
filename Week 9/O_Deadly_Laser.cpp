#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void attack() {
    int n, m, sx, sy, f;
    cin >> n >> m >> sx >> sy >> f;
    if ((sy - f > 1) and (f + sx < n)) cout << m + n - 2 << '\n';
    else if ((sx - f > 1) and (f + sy < m)) cout << m + n - 2 << '\n';
    else cout << "-1" << '\n';
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        attack();
        // cout << "Case " << testCase << ": " << ;
    }
    return 0;
}