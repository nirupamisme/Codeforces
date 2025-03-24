#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    vector<string> v;

    cin >> n;
    v.resize(n);
    
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    

    for (int i = 0; i < n; ++i) {
        int l = v[i].length();
        if (l <= 10) {
            cout << v[i] << endl;
        }
        else {
            cout << v[i][0] << l-2 << v[i][l-1] << endl;
        }
    }

    return 0;
}
