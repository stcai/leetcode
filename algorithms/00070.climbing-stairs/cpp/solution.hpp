using namespace std;

class Solution {
 public:
  int climbStairs(int n) {
    if (n <= 2) {
      return n;
    }

    int pre1 = 2;
    int pre2 = 1;
    for (int i = 3; i < n; ++i) {
      int cur = pre1 + pre2;
      pre2 = pre1;
      pre1 = cur;
    }
    return pre1 + pre2;
  }
};