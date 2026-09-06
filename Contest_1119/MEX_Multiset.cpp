#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int count_0 = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 0) count_0++;
        }
        if (count_0 == 1) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                cout << "C";
            } else {
                if (count_0 % 2 == 0) {
                    cout << "A";
                } else {
                    cout << "B";
                }
                count_0--;
            }
        }
        cout << endl;
    }
}