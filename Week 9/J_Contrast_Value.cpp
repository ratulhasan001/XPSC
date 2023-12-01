#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void attack() {
    int n;
    cin >> n;
    int cnt = 0;
    vector < int > a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int j = 1;
    while (j < n and a[j] == a[j - 1]) j++;
    if (j >= n) {
        cout << "1\n";
        return;
    }
    int down = a[j] < a[j - 1];
    for (int i = j + 1; i < n; i++) {
        if (down and a[i] > a[i - 1]) {
            cnt++;
            down = !down;
        }
        if (!down and a[i] < a[i - 1]) {
            cnt++;
            down = !down;
        }
    }
    cout << cnt + 2 << "\n";
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