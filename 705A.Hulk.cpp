#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    if (n == 1) {
        cout << "I hate it" << endl;
    }
    else if (n == 2) {
        cout << "I hate that I love it" << endl;
    }
    else {
        if (n % 2 == 0) {
            for (int i = 0; i < (n / 2) - 1; i++)
                cout << "I hate that I love that ";
            cout << "I hate that I love it" << endl;
        }
        else {
            for (int i = 0; i < (n - 1) / 2; i++)
                cout << "I hate that I love that ";
            cout << "I hate it" << endl;
        }
    }

    return 0;
}
