#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int first = -1, last = -1;
        int i = 0, j = n-1;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                first = i;
                break;
            }
        }
        for (int i = n-1; i >= 0; i--) {
            if (arr[i] != 0) {
                last = i;
                break;
            }
        }
        for (int i = n-1; i >= 0; i--) {
            if (arr[i] == -1) {
                arr[i] = (first == i || last == i) ? 1 : 0;
            }
        }
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }
}