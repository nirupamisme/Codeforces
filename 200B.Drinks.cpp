#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    double s;

    cin >> n;
    vector<double> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    s = accumulate(v.begin(), v.end(), 0.0);
    
    cout << s / n << endl;

    return 0;
}
