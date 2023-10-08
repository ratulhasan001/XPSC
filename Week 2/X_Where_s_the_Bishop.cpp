#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif



int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
        bool flag = false, blag = false;
        int cnt = 0, save;
        char ch[9][9];
        for(int i = 1; i <= 8; i++) {
            for(int j = 1; j <= 8; j++) {
                cin >> ch[i][j];
            }
        }
        for(int i = 1; i <= 8; i++) {
            for(int j = 1; j <= 8; j++) {
                if(ch[i][j] == '#') {
                    cnt++;
                    save = j;
                }
            }
            int saveI, saveJ;
            if(cnt == 2) flag = true;
            if(flag and cnt == 1) {
                blag = true;
                saveI = i;
                saveJ = save;
            }
            if(flag and blag and cnt == 2) {
                cout << saveI << " " << saveJ << '\n';
                break;
            }
            cnt = 0;
        }

    }
    return 0;
}