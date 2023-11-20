#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if(n & 1) {
        string x;
        for(int i = 0; i < n / 2; i++) {
            if(i % 2 == 0) x += "aa";
            else x += "bb";
        }
        if(x[x.size() - 1] == 'a') x += 'b';
        else x += 'a';
        cout << x;
    } else {
        for(int i = 0; i < n / 2; i++) {
            if(i % 2 == 0) {
                cout << "aa";
            } else {
                cout << "bb";
            }
        }
    }
    cout << '\n';
    return 0;
}