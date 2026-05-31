#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int>::iterator p = find(a.begin(), a.end(), 1);
    if (p == a.end())
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;
    
    return 0;
}
