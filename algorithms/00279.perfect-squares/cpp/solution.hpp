#include <vector>

using namespace std;

class Solution {
 public:
  int numSquares(int n) {
    vector<int> dp = vector(n + 1, numeric_limits<int>::max());
    dp[0] = 0;
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j * j <= i; ++j) {
        dp[i] = min(dp[i], dp[i - j * j] + 1);
      }
    }
    return dp[n];
  }
};