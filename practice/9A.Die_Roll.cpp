#include <bits/stdc++.h>

using namespace std;

int main() {
    int y, w, d, p;

    cin >> y >> w;
    d = 7 - max(y, w);

    switch (d) {
        case 1: cout << "1/6" << endl; break;
        case 2: cout << "1/3" << endl; break;
        case 3: cout << "1/2" << endl; break;
        case 4: cout << "2/3" << endl; break;
        case 5: cout << "5/6" << endl; break;
        case 6: cout << "1/1" << endl; break;
    }

    return 0;
}
