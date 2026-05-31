#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, s = 0, d = 0, l = 1, f;
    deque<int> v;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a;
        v.push_front(a);
    }

    for (int i = 0; i < n; i++) {
        int b = v.front();
        int c = v.back();
        if (b > c) {
            f = b;
            v.pop_front();
        }
        else {
            f = c;
            v.pop_back();
        }

        l *= -1;
        if (l == -1)
            s += f;
        else
            d += f;
    }

    cout << s << " " << d << endl;

    return 0;
}
