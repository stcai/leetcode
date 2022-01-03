#include <vector>

using namespace std;

class Solution {
 public:
  int minPathSum(vector<vector<int>>& grid) {
    const int n = grid.size();
    const int m = grid[0].size();

    vector<int> dp(m, 0);
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (j < 1) {
          dp[j] += grid[i][j];
        } else if (i < 1) {
          dp[j] = grid[i][j] + dp[j - 1];
        } else {
          dp[j] = grid[i][j] + min(dp[j], dp[j - 1]);
        }
      }
    }
    return dp.back();
  }
};