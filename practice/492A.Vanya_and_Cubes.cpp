#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l = 0;

    cin >> n;
    
    while (true) {
        l++;
        n = n - (l * (l + 1) / 2);

        if (n == 0) {
            break;
        }
        if (n < 0) {
            l--;
            break;
        }
    }

    cout << l << endl;

    return 0;
}
