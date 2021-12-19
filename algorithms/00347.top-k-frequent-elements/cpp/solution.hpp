#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> topKFrequent(vector<int>& nums, int k) {
    int max_count = 0;
    unordered_map<int, int> num_to_count;
    for (auto num : nums) {
      max_count = max(max_count, ++num_to_count[num]);
    }

    vector<vector<int>> count_to_nums(max_count + 1);
    for (auto kv : num_to_count) {
      count_to_nums[kv.second].push_back(kv.first);
    }

    vector<int> result;
    result.reserve(k);
    for (int i = max_count; i >= 0; --i) {
      auto sub_nums = count_to_nums[i];
      for (auto num : sub_nums) {
        result.push_back(num);
        if (result.size() == k) {
          return result;
        }
      }
    }
    return result;
  }
};