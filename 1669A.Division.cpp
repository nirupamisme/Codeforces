#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    
    vector<int> v(n);
    for (auto& x: v)
        cin >> x;

    for (auto x: v) {
        if (x >= 1900)
            cout << "Division 1" << endl;
        else if (x >= 1600)
            cout << "Division 2" << endl;
        else if (x >= 1400)
            cout << "Division 3" << endl;
        else
            cout << "Division 4" << endl;
    }

    return 0;
}
