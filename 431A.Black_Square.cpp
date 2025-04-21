#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v(4);
    string s;
    int sum = 0;

    for (auto& x: v)
        cin >> x;
    cin >> s;
    
    for (int i = 0; i < s.length(); ++i) {
        sum += v[s[i]-'0'-1];
    }

    cout << sum << endl;

    return 0;
}
