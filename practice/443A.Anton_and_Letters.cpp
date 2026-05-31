#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    vector<char> v;

    getline(cin, s);
    for (auto it = s.begin(); it != s.end(); it++) {
        if (*it != '{' && *it != '}' && *it != ',' && *it != ' ')
            v.push_back(*it);
    }

    unordered_set<char> u{v.begin(), v.end()};


    cout << u.size() << endl;

    return 0;
}
