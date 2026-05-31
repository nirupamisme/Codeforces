#include <bits/stdc++.h>

using namespace std;

void split(const string s, vector<string>& v) {
    string s1(1, s[0]);
    for (int j = 1; j < s.length(); ++j) {
        if (isalpha(s[j]) && isalpha(s[j-1]))
            s1 += s[j];
        else if (isdigit(s[j]) && isdigit(s[j-1]))
            s1 += s[j];
        else {
            v.push_back(s1);
            s1 = "";
            s1 += s[j];
        }
        if (j == s.length() - 1)
            v.push_back(s1);
    }
}

inline bool isSpreadsheet(const vector<string>& v) {
    if (v.size() == 2)
        return true;
    else
        return false;
}

string toAnother(const vector<string>& v) {
    string s(1, 'R');
    int temp;
    
    s += v[1];
    s += 'C';
    
    int r = static_cast<int> (v[0][v[0].length()-1]) - 64;
    for (int i = 0; i < v[0].length() - 1; ++i) {
        r += (static_cast<int> (v[0][i]) - 64) * 26;
    }

    s += to_string(r);

    return s;
}

string toSpreadsheet(const vector<string>& v) {
    string s;
    
    int r = stoi(v[3]);
    string s1(1, static_cast<char> (r % 26 + 64));
    r -= r % 26;
    while (r != 0) {
        s1 += to_string(s);
    }

    for (int i = s1.length() - 1; i >= 0; --i)
        s += s1[i];

    s += v[1];

    return s;
}

int main() {
    int n;
    string s;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;

        vector<string> v;
        split(s, v);

        if (isSpreadsheet(v))
            cout << toAnother(v) << endl;
        else
            cout << toSpreadsheet(v) << endl;
    }

    return 0;
}
