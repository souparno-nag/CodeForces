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
        int minm = INT_MAX;
        for (int i = 0; i < n; i++) minm = min(minm, arr[i]);
        cout << ((minm == arr[0]) ? "YES" : "NO") << endl;
    }
    return 0;    
}