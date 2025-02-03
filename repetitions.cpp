#include <iostream>
#include <string>

using namespace std;

int main() {
  string in;
  cin >> in;

  int max = 1;

  int streak = 1;

  for (unsigned int i = 0; i < in.length(); i++) {
    if (i > 0 && in[i] == in[i - 1]) {
      streak++;
      if (streak > max) {
        max = streak;
      }
    } else {
      streak = 1;
    }
  }

  cout << max;
}
