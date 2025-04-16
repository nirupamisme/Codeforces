#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, a, count, b;

    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> a;
        
        count = 0;
        b = 0;
        while (count < a) {
            b++;
            if (b % 3 == 0 || b % 10 == 3)
                continue;
            else
                count++;
        }

        cout << b << endl;
    }

    return 0;
}
