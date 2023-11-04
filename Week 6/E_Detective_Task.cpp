#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); 
    
    int t; cin >> t;
    for(int testCase=1; testCase<=t; testCase++) {
    
        string s; cin >> s;
        int zero = s.size() - 1, one = 0, SIZE = s.size();
 
        for (int i = SIZE - 1; i >= 0; i--) {
            if (s[i] == '1') {
                one = i;
                break;
            }
        }
 
        for (int i = 0; i < SIZE; i++) {
            if (s[i] == '0') {
                zero = i;
                break;
            }
        }

        cout << zero - one + 1 << endl;;


    
    }
    return 0;
}