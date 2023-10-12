//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
    map<char, int> mp ;
    int mx = 0;
    int start = 0;

    for(int end = 0; end < s.length(); end++) {
        
        if (mp.find(s[end]) != mp.end()) {
            
            start = max(start, mp[s[end]] + 1);
        }
        mp[s[end]] = end;
        mx = max(mx,end - start + 1);
    }
    return mx;
}