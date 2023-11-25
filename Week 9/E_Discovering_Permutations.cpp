#include <bits/stdc++.h>
using namespace std;

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase = 1; testCase <= T; testCase++) {
    
        int n, k;
        cin >> n >> k;
        string x;
        int cnt = 0;
        for(char c = 'A'; c <= 'Z' and cnt < n; c++, cnt++)  x += c;
        string y = x;
        cout << "Case " << testCase << ": " << '\n' << x << '\n';
        for(int i = 1; i < k; i++) {
            next_permutation(x.begin(), x.end());
            if(x == y) break;
            cout << x << '\n';
        }
    }
    return 0;
}