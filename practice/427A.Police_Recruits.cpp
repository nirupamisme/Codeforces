#include <iostream>

using namespace std;

int main() {
    int n, a, b = 0, c = 0, s = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a == -1) {
            c = -1;
        }
        else {
            b += a;
            continue;
        }
        if (c + b < 0) {
            s++;
            c = 0;
        }
        else {
            b--;
        }
    }

    cout << s << endl;

    return 0;
}
