#include <bits/stdc++.h>

using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {
        int x, cnt = 0;
        cin >> x;
        if (x == 50) cout << "0" << '\n';
        else if (x > 50) { // x>50
            while (x > 50) {
                x -= 3;
                cnt++;
                // cout<<cnt<<'\n';
            }
            // cout<<x<<'\n';
            if (x == 50) cout << cnt << '\n';
            else {
                while ((50 - x) % 2 != 0) {
                    x -= 3;
                    cnt++;
                }
                // cout<<cnt<<'\n';
                cout << cnt + (50 - x) / 2 << '\n';
            }

        } else if (x < 50) { // x>50
            while (x < 50) {
                x += 2;
                cnt++;
                // cout<<cnt<<'\n';
            }
            // cout<<x<<'\n';
            if (x == 50) cout << cnt << '\n';
            else {
                while ((x - 50) % 3 != 0) {
                    x += 2;
                    cnt++;
                }
                // cout<<cnt<<'\n';
                cout << cnt + (x - 50) / 3 << '\n';
            }

        }
    }

    return 0;
}