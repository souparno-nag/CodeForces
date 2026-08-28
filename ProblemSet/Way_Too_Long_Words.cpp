#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string word;
    cin >> word;
    int w_len = word.length();
    if (w_len > 10) cout << word[0] << to_string(w_len-2) << word[w_len-1] << endl;
    else cout << word << endl;
  }
  return 0;
}

