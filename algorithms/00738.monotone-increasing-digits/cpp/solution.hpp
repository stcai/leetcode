#include <array>

using namespace std;

class Solution {
 public:
  int monotoneIncreasingDigits(int n) {
    array<int, 10> digists;
    int digit_count = 0;
    while (n > 0) {
      digists[digit_count++] = n % 10;
      n /= 10;
    }

    int flag = 0;
    for (int i = 1; i < digit_count; ++i) {
      if (digists[i] > digists[i - 1]) {
        digists[i] -= 1;
        digists[i - 1] = 9;
        flag = i;
      }
    }
    for (int i = flag - 1; i >= 0; --i) {
      digists[i] = 9;
    }

    n = 0;
    for (int i = digit_count - 1; i >= 0; --i) {
      n *= 10;
      n += digists[i];
    }
    return n;
  }
};