#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n; 
        cin >> n;
        for(int i = 1; i <= n; i++) cout << i * 2 << " ";
        cout << '\n';
    }
    return 0;
}