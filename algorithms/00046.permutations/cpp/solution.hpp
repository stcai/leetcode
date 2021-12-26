#include <vector>

using namespace std;

class Solution {
 public:
  vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;
    backtrack(nums, 0, result);
    return result;
  }

 private:
  void backtrack(vector<int>& nums, int level, vector<vector<int>>& result) {
    if (level == nums.size() - 1) {
      result.push_back(nums);
    }
    for (int i = level; i < nums.size(); ++i) {
      swap(nums[i], nums[level]);
      backtrack(nums, level + 1, result);
      swap(nums[i], nums[level]);
    }
  }
};