#include <bits/stdc++.h>

using namespace std;

bool yearChecker(int m) {
    vector<int> year(4);

    for (int i = 0; i < 4; i++) {
        year[i] = m % 10;
        m = static_cast<int> (m / 10);
    }
    
    sort(year.begin(), year.end());
    vector<int>::iterator p = year.begin();
    for (int i = 0; i < 3; i++) {
        if (find(++p, year.end(), year[i]) != year.end())
            return true;
    }

    return false;
}

int main() {
    int n, m;

    cin >> n;
    m = n + 1;

    while (yearChecker(m))
        m++;

    cout << m << endl; 

    return 0;
}
