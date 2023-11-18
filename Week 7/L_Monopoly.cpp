#include <bits/stdc++.h>

using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        vector < int > v(4);
        for (int i = 0; i < 4; i++) {
            cin >> v[i];
        }
        int mx = * max_element(v.begin(), v.end());
        int sum = 0;
        for (int i = 0; i < 4; i++) {
            sum += v[i];
        }
        if (mx > (sum - mx)) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}