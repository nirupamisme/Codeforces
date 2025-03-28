#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    string s1 = "abcdefghijklmnopqrstuvwxyz";

    cin >> n;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
        s[i] = tolower(s[i]);
    
    for (int i = 0; i < s1.length(); ++i) {
        if (find(s.begin(), s.end(), s1[i]) == s.end()) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
