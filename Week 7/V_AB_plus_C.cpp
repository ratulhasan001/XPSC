#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1000000;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        ll n;
        cin >> n;
        if (n == 1)
            cout << -1 << '\n';
        else if (n > N) {
            if (n > N and n % N != 0)
                cout << N << " " << n / N << " " << n % N << '\n';
            else
                cout << N << " " << n / N - 1 << " " << N << '\n';
        } else {
            cout << 1 << " " << 1 << " " << n - 1 << '\n';
        }
    }
    return 0;
}