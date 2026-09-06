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
        unordered_map<int, int> map;
        map[0] = 0; map[1] = 0; map[2] = 0; map[3] = 0;
        for (int i = 0; i < n; i++) {
            int rem = arr[i]%4;
            map[rem]++;
        }
        int max_count = max(map[0], map[2]);
        max_count = max(max_count, map[1] + map[3]);
        cout << max_count << endl;
    }
}