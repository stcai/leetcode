#include <vector>

using namespace std;

class Solution {
 public:
  int maximalSquare(vector<vector<char>>& matrix) {
    const int n = matrix.size();
    const int m = matrix[0].size();
    vector<vector<int>> dp = vector(n + 1, vector<int>(m + 1, 0));

    int max_side = 0;
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= m; ++j) {
        if (matrix[i - 1][j - 1] == '1') {
          dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
          max_side = max(dp[i][j], max_side);
        }
      }
    }
    return max_side * max_side;
  }
};