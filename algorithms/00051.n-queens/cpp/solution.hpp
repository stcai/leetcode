#include <string>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<vector<string>> solveNQueens(int n) {
    vector<bool> column(n);
    vector<bool> ldiag(2 * n - 1);
    vector<bool> rdiag(2 * n - 1);
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> result;
    search(n, column, ldiag, rdiag, 0, board, result);
    return result;
  }

 private:
  void search(int n, vector<bool>& column, vector<bool>& ldiag,
              vector<bool>& rdiag, int level, vector<string>& board,
              vector<vector<string>>& result) {
    if (level == n) {
      result.push_back(board);
      return;
    }

    for (int i = 0; i < n; ++i) {
      if (column[i] || ldiag[level + i] || rdiag[n - 1 - i + level]) {
        continue;
      }

      board[level][i]='Q';
      column[i] = ldiag[level + i] = rdiag[n - 1 - i + level] = true;
      search(n, column, ldiag, rdiag, level + 1, board, result);
      column[i] = ldiag[level + i] = rdiag[n - 1 - i + level] = false;
      board[level][i]='.';
    }
  }
};