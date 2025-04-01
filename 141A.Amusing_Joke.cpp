#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2, s3, s4;
    int sum1 = 0, sum2 = 0, sum3 = 0;

    cin >> s1 >> s2 >> s3;

    if (s1.length() + s2.length() != s3.length()) {
        cout << "NO" << endl;
    }
    else {
        s4 = s1 + s2;
        
        sort(s3.begin(), s3.end());
        sort(s4.begin(), s4.end());

        if (s3 == s4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
