#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  long long prev;
  cin >> prev;

  long long cur;
  long long count = 0;

  for (int i = 0; i < n - 1; i++) {
    cin >> cur;
    if (cur < prev) {
      int dif = prev - cur;
      count += dif; 
      cur += dif; 
    }
    prev = cur; 
  }

  cout << count;
}
