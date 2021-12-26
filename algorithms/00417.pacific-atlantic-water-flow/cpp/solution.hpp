#include <array>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
    if (heights.empty() || heights[0].empty()) {
      return {};
    }

    const int n = heights.size();
    const int m = heights[0].size();

    auto can_reach_pacific = vector<vector<bool>>(n, vector<bool>(m, false));
    auto can_reach_atlantic = vector<vector<bool>>(n, vector<bool>(m, false));

    for (int i = 0; i < n; ++i) {
      search(heights, i, 0, can_reach_pacific);
      search(heights, i, m - 1, can_reach_atlantic);
    }
    for (int i = 0; i < m; ++i) {
      search(heights, 0, i, can_reach_pacific);
      search(heights, n - 1, i, can_reach_atlantic);
    }

    vector<vector<int>> result;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        if (can_reach_pacific[i][j] && can_reach_atlantic[i][j]) {
          result.push_back({i, j});
        }
      }
    }
    return result;
  }

 private:
  static constexpr array<int, 5> DIRECTION = {-1, 0, 1, 0, -1};

  void search(const vector<vector<int>>& heights, int row, int column,
              vector<vector<bool>>& can_reach) {
    const int n = heights.size();
    const int m = heights[0].size();

    stack<pair<int, int>> pending_node_stack;
    can_reach[row][column] = true;
    pending_node_stack.push({row, column});
    while (!pending_node_stack.empty()) {
      const auto pending_node = pending_node_stack.top();
      pending_node_stack.pop();

      for (int k = 0; k < 4; ++k) {
        const int adjacent_row = pending_node.first + DIRECTION[k];
        const int adjacent_column = pending_node.second + DIRECTION[k + 1];
        if ((adjacent_row >= 0 && adjacent_row < n) &&
            (adjacent_column >= 0 && adjacent_column < m) &&
            !can_reach[adjacent_row][adjacent_column] &&
            heights[adjacent_row][adjacent_column] >=
                heights[pending_node.first][pending_node.second]) {
          can_reach[adjacent_row][adjacent_column] = true;
          pending_node_stack.push({adjacent_row, adjacent_column});
        }
      }
    }
  }
};