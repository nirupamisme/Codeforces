#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, even, odd, sum_even, sum_odd;

    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n;

        if ((n / 2) % 2 == 0) {
            cout << "YES" << endl;
            even = 0;
            odd = 1;
            sum_even = 0;
            sum_odd = 0;
            for (int j = 0; j < n / 2; ++j) {
                even += 2;
                cout << even << " ";
                sum_even += even;
            }
            for (int j = 1; j < n / 2; ++j) {
                sum_odd += odd;
                cout << odd << " ";
                odd += 2;
            }
            cout << sum_even - sum_odd << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
