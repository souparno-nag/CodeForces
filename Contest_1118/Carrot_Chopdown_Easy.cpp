#include <iostream>
#include <vector>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    int max_count = 0;
    for (int x = 1; x <= m/2+1; x++) {
      int count = 0;
      for (int i = 0; i < n; i++) {
	if (x <= arr[i]) count++;
	if (x*2 == arr[i]) count++;
      }
      max_count = max(count, max_count);
    }
    cout << max_count << endl;
  }
  return 0;
}
