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
        vector < int > v(n);
        map < int, int > mp;
        for(int &i : v) {
            cin >> i;
        }
        int cnt = 0, sum = 0;
        sort(v.rbegin(), v.rend());
        for(auto x : v) {
            if(mp[x] == 0) {
                sum += x;
                cnt++;
                mp[x]++;
                if(cnt == 2) break;
            }
            
        }
        cout << sum << '\n';
    }
    return 0;
}