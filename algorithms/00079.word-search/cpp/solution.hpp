#include <string>
#include <vector>

using namespace std;

class Solution {
 public:
  bool exist(vector<vector<char>>& board, string word) {
    vector<vector<bool>> visited(board.size(),
                                 vector<bool>(board[0].size(), false));
    const int m = board.size();
    const int n = board[0].size();
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        bool exist = false;
        search(board, i, j, word, 0, visited, exist);
        if (exist) {
          return true;
        }
      }
    }
    return false;
  }

 private:
  void search(const vector<vector<char>>& board, int row, int column,
              const string& word, int word_index, vector<vector<bool>>& visited,
              bool& exist) {
    if ((row >= board.size() || column >= board[0].size()) ||
        (board[row][column] != word[word_index]) || visited[row][column] ||
        exist) {
      return;
    }
    if (word_index == word.size() - 1) {
      exist = true;
      return;
    }

    visited[row][column] = true;
    search(board, row - 1, column, word, word_index + 1, visited, exist);
    search(board, row + 1, column, word, word_index + 1, visited, exist);
    search(board, row, column - 1, word, word_index + 1, visited, exist);
    search(board, row, column + 1, word, word_index + 1, visited, exist);
    visited[row][column] = false;
  }
};