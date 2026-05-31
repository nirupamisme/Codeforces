#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s1, s2;

    cin >> n;
    
    vector<int> v(n);
    for (auto& x: v)
        cin >> x;

    for (auto x: v) {
        s1 = s2 = 0;
        int count = 1;
        while (x != 0) {
            if (count <= 3) {
                s1 += x % 10;
                x = static_cast<int> (x / 10);
                count++;
            }
            else {
                s2 += x % 10;
                x = static_cast<int> (x / 10);
                count++;
            }
        }
        if (s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
