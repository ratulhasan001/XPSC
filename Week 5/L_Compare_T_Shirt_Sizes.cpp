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
    
        string a, b;
        cin >> a >> b;
        if(a == b) {
            cout << "=" << '\n';
            continue;
        }
        map<char,int>ma;
        map<char,int>mb;

        for(int i = 0; i < (int)a.size(); i++) ma[a[i]]++;
        for(int i = 0; i < (int)b.size(); i++) mb[b[i]]++;
        char ch = 'X', la = a[(int)a.size() - 1], lb = b[(int)b.size() - 1];
        // L M S
        if(la == 'L' and lb == 'M') {
            cout << ">" << '\n';
        }
        else if(la == 'M' and lb == 'L') {
            cout << "<" << '\n';
        }
        else if(la == 'M' and lb == 'S') {
            cout << ">" << '\n';
        }
        else if(la == 'S' and lb == 'M') {
            cout << "<" << '\n';
        }
        else if(la == 'L' and lb == 'S') {
            cout << ">" << '\n';
        }
        else if(la == 'S' and lb == 'L') {
            cout << "<" << '\n';
        }
        else if(la == lb) {
            if(la == 'L') {
                if(ma[ch] > mb[ch]) cout << ">" << '\n';
                else if(ma[ch] < mb[ch]) cout << "<" << '\n';
                else cout << "=" << '\n';
            }
            if(la == 'M') {
                if(ma[ch] > mb[ch]) cout << ">" << '\n';
                else if(ma[ch] < mb[ch]) cout << "<" << '\n';
                else cout << "=" << '\n';
            }
            if(la == 'S') {
                if(ma[ch] > mb[ch]) cout << "<" << '\n';
                else if(ma[ch] < mb[ch]) cout << ">" << '\n';
                else cout << "=" << '\n';
            }
        }
    }
    return 0;
}