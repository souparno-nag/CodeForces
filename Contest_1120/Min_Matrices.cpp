#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k < n || k > (2*n-1)) {
            cout << -1 << endl;
            continue;
        }
        vector<bool> visited(n*n+1, false);
        vector<vector<int>> A(n, vector<int>(n, -1));
        int p = 0;
        while (k >= n) {
            A[0][p] = p+1;
            visited[p+1] = true;
            p++;
            k--;
        }
        for (int i = 1; i < n; i++) {
            A[i][i] = p+1;
            visited[p+1] = true;
            p++;
        }
        int a = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (A[i][j] != -1) continue;
                while (visited[a]) a++;
                A[i][j] = a++;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}