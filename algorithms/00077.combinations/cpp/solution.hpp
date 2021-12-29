#include <vector>

using namespace std;

class Solution {
 public:
  vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> result;
    vector<int> combination(k);
    int count = 0;
    backtrack(n, k, 1, combination, count, result);
    return result;
  }

 private:
  void backtrack(int n, int k, int level, vector<int>& combination, int& count,
                 vector<vector<int>>& result) {
    if (count == k) {
      result.push_back(combination);
      return;
    }
    if (n - level + 1 < k - count) {
      return;
    }

    for (int i = level; i <= n; ++i) {
      combination[count] = i;
      ++count;
      backtrack(n, k, i + 1, combination, count, result);
      --count;
    }
  }
};