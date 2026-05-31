#include <bits/stdc++.h>

using namespace std;

int main() {
    cout.tie(nullptr);
    std::ios::sync_with_stdio(false);

    int n, val;
    map<string, int> m;
    vector<string> n1;
    vector<int> v1;
    string name;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> name >> val;
        n1.push_back(name);
        v1.push_back(val);
        m[name] += val;
    }

    // Initialize max element
    map<string, int>::iterator max = m.begin();
    for (auto it = m.begin(); it != m.end(); ++it) {
        if (it->second > max->second) {
            max = it;
        }
    }

    map<string, int> max_m;
    for (auto [key, value]: m) {
        if (m[key] == max->second)
            max_m[key] = value;
    }

    vector<int> index;
    for (auto [key, value]: max_m) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            if (n1[i] == key) {
                sum += v1[i];
                if (sum >= value) {
                    index.push_back(i);
                    break;
                }
            }
        }
    }

    sort(index.begin(), index.end());

    cout << n1[index[0]] << endl;

    return 0;
}
