#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n] = {0};
        for (int i = 0; i < n; i++) cin >> arr[i];
        bool check = true;
        for (int i = 0; i < n-1; i++) {
            if (arr[i+1] < arr[i]) {
                check = false;
                break;
            }
        }
        cout << ((check || k > 1) ? "YES" : "NO") << endl;
    }
    return 0;
}