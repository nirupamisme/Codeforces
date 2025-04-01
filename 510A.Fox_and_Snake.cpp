#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, f = 1;
    string s1, s2, s3;

    cin >> n >> m;

    for (int j = 0; j < m; j++) {
        s1 += '#';
        if (j == m-1)
            s2 += '#';
        else
            s2 += '.';
        if (j == 0)
            s3 += '#';
        else
            s3 += '.';
    }
    
    for (int i = 1; i <= n; ++i) {
        if (i % 2 != 0) {
            cout << s1 << endl;
        }
        else {
            if (f == 1)
                cout << s2 << endl;
            else
                cout << s3 << endl;
            f *= -1;
        }
    }

    return 0;
}
