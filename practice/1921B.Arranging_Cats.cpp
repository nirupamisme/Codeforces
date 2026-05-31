#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, count, one, zero;
    string s, f;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> s >> f;
        
        count = one = zero = 0;
        for (int j = 0; j < n; ++j) {
            if (s[j] != f[j]) {
                count++;
                if (s[j] == '1')
                    one++;
                if (s[j] == '0')
                    zero++;
                if (one > 0 && zero > 0) {
                    count--;
                    one--;
                    zero--;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
