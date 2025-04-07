#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int n_drinks = static_cast<int> ((k * l) / (nl));
    int n_limes = c * d;
    int n_salt = static_cast<int> (p / np);

    int toast = min(n_drinks, n_limes);
    toast = static_cast<int> (min(toast, n_salt) / n);

    cout << toast << endl;

    return 0;
}
