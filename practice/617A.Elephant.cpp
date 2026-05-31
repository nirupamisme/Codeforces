#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s = 0;
    
    cin >> n;

    if (n > 5) {
        s = static_cast<int> (n / 5);
        if (n % 5 != 0) {
            s++;
        }
    }
    else {
        s++;
    }

    cout << s << endl;

    return 0;
}
