#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> gas_stations(n);
        for (int i = 0; i < n; i++) cin >> gas_stations[i];
        int min_vol = -1;
        for (int i = 0; i <= n; i++) {
            if (i == 0) {
                min_vol = max(min_vol, gas_stations[i] - 0);
            } else if (i == n) {
                min_vol = max(min_vol, 2*(x-gas_stations[n-1]));
            } else {
                min_vol = max(min_vol, gas_stations[i] - gas_stations[i-1]);
            }
        }
        cout << min_vol << endl;
    }
    return 0;
}