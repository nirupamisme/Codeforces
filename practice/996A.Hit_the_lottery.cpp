#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s = 0;

    cin >> n;
    while (n != 0) {
        if (static_cast<int> (n / 100) != 0) {
            s += static_cast<int> (n / 100);
            n %= 100;
        }
        else if (static_cast<int> (n / 20) != 0) {
            s += static_cast<int> (n / 20);
            n %= 20;
        }
        else if (static_cast<int> (n / 10) != 0) {
            s += static_cast<int> (n / 10);
            n %= 10;
        }
        else if (static_cast<int> (n / 5) != 0) {
            s += static_cast<int> (n / 5);
            n %= 5;
        }
        else {
            s += static_cast<int> (n / 1);
            n %= 1;
        }
    }

    cout << s << endl;

    return 0;
}
