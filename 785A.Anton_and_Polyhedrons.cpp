#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, f;
    vector<int> v(5);
    string s;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s == "Tetrahedron")
            v[0]++;
        else if (s == "Cube")
            v[1]++;
        else if (s == "Octahedron")
            v[2]++;
        else if (s == "Dodecahedron")
            v[3]++;
        else
            v[4]++;
    }

    f = v[0] * 4 + v[1] * 6 + v[2] * 8 + v[3] * 12 + v[4] * 20;
    cout << f << endl;

    return 0;
}
