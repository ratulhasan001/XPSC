#include <bits/stdc++.h>

using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int testCase = 1; testCase <= T; testCase++) {

        int x, rem;
        cin >> x;
        rem = x % 10;
        // if(x<10) cout<<"90"<<'\n';
        if (x > 95) cout << "0" << '\n';
        else {
            if (rem < 5) x -= rem;
            else x = x - rem + 10;
            cout << 100 - x << '\n';
        }
    }
    return 0;
}