#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i]) count1++;
            else count0++;
        }
        if (count1 >= count0) cout << "Bessie" << endl;
        else cout << "Elsie" << endl;
    }
    return 0;
}