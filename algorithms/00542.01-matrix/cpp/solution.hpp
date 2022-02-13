#include <limits>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> result =
        vector(n, vector<int>(m, std::numeric_limits<int>::max() - 1));

    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (mat[i][j] == 0) {
          result[i][j] = 0;
        } else {
          if (i - 1 >= 0) {
            result[i][j] = min(result[i][j], result[i - 1][j] + 1);
          }
          if (j - 1 >= 0) {
            result[i][j] = min(result[i][j], result[i][j - 1] + 1);
          }
        }
      }
    }

    for (int i = n - 1; i >= 0; --i) {
      for (int j = m - 1; j >= 0; --j) {
        if (mat[i][j] == 0) {
          continue;
        }
        if (i + 1 < n) {
          result[i][j] = min(result[i][j], result[i + 1][j] + 1);
        }
        if (j + 1 < m) {
          result[i][j] = min(result[i][j], result[i][j + 1] + 1);
        }
      }
    }

    return result;
  }
};