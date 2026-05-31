#include <bits/stdc++.h>

using namespace std;

int main() {
    int count = 0;
    vector<long> v(4);

    for (auto& x: v)
        cin >> x;
    
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] == v[j]) {
                count++;
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}
