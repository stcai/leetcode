#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> hash_table;
    for (int i = 0; i < nums.size(); i++) {
      auto it = hash_table.find(target - nums[i]);
      if (it != hash_table.end()) {
        return {i, it->second};
      }
      hash_table.emplace(nums[i], i);
    }
    return {};
  }
};
