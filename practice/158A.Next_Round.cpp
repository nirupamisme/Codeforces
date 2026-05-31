#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, m = 0;

    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < k; i++) {
        if (v[i] <= 0) {
            cout << m << endl;
            return 0;
        }
        else {
            m += 1;
        }
    }

    for (int i = k; i < n; i++) {
        if (v[k-1] > v[i])
            break;
        m += 1;
    }

    cout << m << endl;


    return 0;
}
