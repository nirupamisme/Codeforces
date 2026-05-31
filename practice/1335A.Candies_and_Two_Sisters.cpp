#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    vector<int> v(n);

    for (auto& x: v)
        cin >> x;

    for (auto x: v)
        if (x % 2 == 0)
            cout << (x / 2) - 1 << endl;
        else
            cout << static_cast<int> (x / 2) << endl;
        
    return 0;
}
