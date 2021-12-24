#include <array>
#include <stack>
#include <vector>

using namespace std;

class Solution {
 public:
  int maxAreaOfIsland(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    int max_count = 0;
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        if (grid[i][j] == 1) {
          grid[i][j] = 0;
          int count = 1;
          stack<pair<int, int>> s;
          s.push({i, j});
          while (!s.empty()) {
            auto [x, y] = s.top();
            s.pop();
            for (int k = 0; k < 4; ++k) {
              const int adjacent_x = x + direction[k];
              const int adjacent_y = y + direction[k + 1];
              if ((adjacent_x >= 0 && adjacent_x < m) &&
                  (adjacent_y >= 0 && adjacent_y < n) &&
                  grid[adjacent_x][adjacent_y] == 1) {
                grid[adjacent_x][adjacent_y] = 0;
                ++count;
                s.push({adjacent_x, adjacent_y});
              }
            }
          }
          if (count > max_count) {
            max_count = count;
          }
        }
      }
    }

    return max_count;
  }

 private:
  static constexpr array<int, 5> direction = {-1, 0, 1, 0, -1};
};