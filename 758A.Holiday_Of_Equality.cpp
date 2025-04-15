#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s = 0;

    cin >> n;

    vector<int> v(n);
    for (auto& x: v)
        cin >> x;

    sort(v.begin(), v.end());
    
    for (int i = 0; i < n-1; ++i) {
        s += v[n-1] - v[i];
    }

    cout << s << endl;

    return 0;
}
