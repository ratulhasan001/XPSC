#include <bits/stdc++.h>
using namespace std;

string ok(string strng) {

    unordered_map < char, int > mp;
    for (int i = 0; i < strng.size(); i++)
        mp[strng[i]]++;

    int odd = 0;
    char odd_character;
    for (auto [x, y]: mp) {
        if (y % 2 != 0) {
            odd++;
            odd_character = x;
        }
    }
    if (odd > 1 or odd == 1 and strng.size() % 2 == 0) return "NO SOLUTION";

    string firstHalf = "", secondHalf = "";
    for (auto [x, y] : mp) {

        string s(y / 2, x);
        firstHalf = firstHalf + s;
        secondHalf = s + secondHalf;
    }

    return (odd == 1) ? (firstHalf + odd_character + secondHalf) : (firstHalf + secondHalf);
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    cout << ok(s);
    return 0;
}