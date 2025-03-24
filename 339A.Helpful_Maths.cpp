#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<char> n;
    string s;

    getline(cin, s);
    
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '+')
            continue;
        else
            n.push_back(s[i]);
    }

    sort(n.begin(), n.end());

    cout << n[0];
    for (int i = 1; i < n.size(); ++i)
        cout << "+" << n[i];
    cout << endl;

    return 0;
}
