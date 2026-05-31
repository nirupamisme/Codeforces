#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;

    cin >> n;
    
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s[0] == 'Y' || s[0] == 'y')
            if (s[1] == 'E' || s[1] == 'e')
                if (s[2] == 'S' || s[2] == 's') {
                    cout << "YES" << endl;
                    continue;
                }
        cout << "NO" << endl;
    }

    return 0;
}
