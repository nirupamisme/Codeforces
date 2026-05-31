#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a;

    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < v.size(); i++) {
        cin >> a;
        v[a-1] = i+1;
    }

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;

    return 0;
}
