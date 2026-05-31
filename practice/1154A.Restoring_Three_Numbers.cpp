#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    vector<int> v(4);

    for (auto& x: v)
        cin >> x;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size() - 1; ++i)
        cout << v[v.size()-1] - v[i] << " ";

    cout << endl;

    return 0;
}
