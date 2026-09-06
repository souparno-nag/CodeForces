#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int n, k;
        cin >> n >> k;
        string fields;
        cin >> fields;
        int count = 0;
        for (int i = 0; i < n; i += k) {
            bool is_zero = false;
            for (int j = i; j < i+k; j++) {
                if (fields[j] == '0') {
                    is_zero = true;
                    break;
                }
            }
            if (!is_zero) count++;
        }
        cout << count << endl;
    }
}