#include <string>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<vector<string>> solveNQueens(int n) {
    vector<bool> column(n);
    vector<bool> ldiag(2 * n - 1);
    vector<bool> rdiag(2 * n - 1);
    string row(n, '.');
    vector<string> one_solution;
    vector<vector<string>> result;
    search(n, column, ldiag, rdiag, 0, row, one_solution, result);
    return result;
  }

 private:
  void search(int n, vector<bool>& column, vector<bool>& ldiag,
              vector<bool>& rdiag, int level, string& row, vector<string>& one_solution,
              vector<vector<string>>& result) {
    if (level == n) {
      result.push_back(one_solution);
      return;
    }

    for (int i = 0; i < n; ++i) {
      if (column[i] || ldiag[level + i] || rdiag[n - 1 - i + level]) {
        continue;
      }

      row[i] = 'Q';
      one_solution.push_back(row);
      row[i]='.';
      column[i] = ldiag[level + i] = rdiag[n - 1 - i + level] = true;
      search(n, column, ldiag, rdiag, level + 1, row, one_solution, result);
      one_solution.pop_back();
      column[i] = ldiag[level + i] = rdiag[n - 1 - i + level] = false;
      
    }
  }
};