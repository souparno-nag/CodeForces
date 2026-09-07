#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int total_empty = 0, max_continuous_empty = 0, continuous_empty = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                total_empty++;
                continuous_empty++;
            } else if (s[i] == '#') {
                max_continuous_empty = max(max_continuous_empty, continuous_empty);
                continuous_empty = 0;
            }
        }
        max_continuous_empty = max(max_continuous_empty, continuous_empty);
        if (max_continuous_empty >= 3) {
            cout << 2 << endl;
        } else {
            cout << total_empty << endl;
        }
    }
    return 0;
}