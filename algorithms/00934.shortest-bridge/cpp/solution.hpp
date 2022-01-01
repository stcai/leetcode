#include <array>
#include <queue>
#include <stack>
#include <utility>

using namespace std;

class Solution {
 public:
  int shortestBridge(vector<vector<int>>& grid) {
    queue<pair<int, int>> edges;
    searchFirstIsland(grid, edges);
    int level = 0;
    while (!edges.empty()) {
      ++level;
      for (int i = edges.size(); i > 0; --i) {
        auto [r, c] = edges.front();
        edges.pop();
        for (int k = 0; k < 4; ++k) {
          const int nr = r + direction[k];
          const int nc = c + direction[k + 1];
          if ((nr >= 0 && nr < grid.size()) &&
              (nc >= 0 && nc < grid[0].size())) {
            if (grid[nr][nc] == 1) {
              return level;
            } else if (grid[nr][nc] == 0) {
              grid[nr][nc] = 2;
              edges.push({nr, nc});
            }
          }
        }
      }
    }
    return 0;
  }

 private:
  static constexpr array<int, 5> direction{-1, 0, 1, 0, -1};

  void searchFirstIsland(vector<vector<int>>& grid,
                         queue<pair<int, int>>& edges) {
    for (int i = 0; i < grid.size(); ++i) {
      for (int j = 0; j < grid[0].size(); ++j) {
        if (grid[i][j] == 1) {
          stack<pair<int, int>> to_visit_node;
          to_visit_node.push({i, j});
          while (!to_visit_node.empty()) {
            auto [r, c] = to_visit_node.top();
            to_visit_node.pop();
            grid[r][c] = 2;
            for (int k = 0; k < 4; ++k) {
              const int nr = r + direction[k];
              const int nc = c + direction[k + 1];
              if ((nr >= 0 && nr < grid.size()) &&
                  (nc >= 0 && nc < grid[0].size())) {
                if (grid[nr][nc] == 1) {
                  to_visit_node.push({nr, nc});
                } else if (grid[nr][nc] == 0) {
                  edges.push({nr, nc});
                }
              }
            }
          }
          return;
        }
      }
    }
  }
};