#include <iostream>

using namespace std;

int main() {
  long long n;
  cin >> n;

  long long j;
  long long sum = 0;

  for (int i = 0; i < n - 1; i++) {
    cin >> j;
    sum += j;
  }

  cout << ((n * (n + 1)) / 2) - sum;
}
