class Solution {
 public:
  int monotoneIncreasingDigits(int n) {
    int result = n;
    int power = 1;
    while (n >= 10) {
      int tow_digist = n % 100;
      n /= 10;
      power *= 10;
      if (tow_digist / 10 > tow_digist % 10) {
        result = n * power - 1;
        n -= 1;
      }
    }
    return result;
  }
};