#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d = 0, c;
    
    cin >> n;

    vector<int> v(n), v1;
    for (auto& x: v)
        cin >> x;

    for (int i = 0; i < v.size(); ++i) {
        c = 0;
        d = 0;
        while (v[i] != 0) {
            if (v[i] % 10 != 0) {
                c++;
                v1.push_back(static_cast<int> ((v[i] % 10) * pow(10, d)));
            }
            v[i] = static_cast<int> (v[i] / 10);
            d++;
        }
        
        cout << c << endl;
        for (int j = 0; j < v1.size(); ++j)
            cout << v1[j] << " ";
        cout << endl;
        v1.erase(v1.begin(), v1.end());
    }

    return 0;
}
