#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        unordered_map<int, int> map;
        for (int i = 0; i < n; i++) {
            if (map.find(arr[i]) == map.end()) {
                map[arr[i]] = 1;
            } else {
                map[arr[i]]++;
            }
        }

        if (map.size() > 2) {
            cout << "No" << endl;
            continue;
        }
        if (map.size() == 1) {
            cout << "Yes" << endl;
            continue;
        }
        vector<int> counts;
        for (auto pair : map) {
            counts.push_back(pair.second);
        }
        if (abs(counts[0] - counts[1]) <= 1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}