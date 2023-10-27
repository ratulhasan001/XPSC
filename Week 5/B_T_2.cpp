#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int>v(n);
    for(int &i : v) cin >> i;
    int q;
    cin >> q;
    int mx = v[n - 1], mn = v[0];
    while(q--) {
        int x;
        cin >> x;
        int a = lower_bound(v.begin(), v.end(), x) - v.begin();
        int b = upper_bound(v.begin(), v.end(), x) - v.begin();
        // cout << a << " " << b << '\n';
        if(x <= mn) cout << "X" << " ";
        else cout << v[a - 1] << " ";
        if(x >= mx) {
            cout << "X";
        }
        else cout << v[b];
        cout << "\n";
    }
    return 0;
}