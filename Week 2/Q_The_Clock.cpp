#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#ifdef ONLINE_JUDGE
#define debug(...) 42
#define debug_array(x,y) 42
#else
#include "deBUG.h"
#endif

bool ispalindrome(string s1, string s2) {
    string x = s1;
    ranges :: reverse(x);
    return x == s2;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    for(int testCase=1; testCase <= T; testCase++) {
    
        string a;
        int b;
        cin >> a >> b;
        string hour, minute;
        hour += a[0];
        hour += a[1];
        minute += a[3];
        minute += a[4];
        int hr = stoi(hour);
        int mnt = stoi(minute);
        int hrcopy = hr, mntcopy = mnt;
        
        int shr = b / 60;
        int amnt = b - ((b/60) * 60);
        int ans = 0;
        while(true) {
            hr += shr;
            mnt += amnt;
            if(hr > 23) hr = hr - 24;
            if(mnt > 59) {
                mnt = mnt - 60;
                hr += 1;
                if(hr > 23) hr = hr - 24;

            }
            // debug(hr,mnt);
            stringstream ss, ss2;
            ss << hr;
            ss2 << mnt ; 
            // 1 digit check
            char ch = '0';
            string checkHour = ss.str();
            string checkMinute = ss2.str();
            if(checkHour.size() == 1) checkHour = ch + checkHour;
            if(checkMinute.size() == 1) checkMinute = ch + checkMinute;
            // debug(checkHour,checkMinute);
            if(ispalindrome(checkHour, checkMinute)) {
                ans++;
                // debug(ss.str(),ss2.str());
            }
            else if(ispalindrome(checkMinute, checkHour)) {
                ans++;
                // debug(ss.str(),ss2.str());
            }
            if(hr == hrcopy and mnt == mntcopy) break;
        }
        cout << ans << '\n';

    }
    return 0;
}