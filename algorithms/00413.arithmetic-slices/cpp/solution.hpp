#include <vector>

using namespace std;

class Solution {
 public:
  int numberOfArithmeticSlices(vector<int>& nums) {
    if (nums.size() < 3) {
      return 0;
    }

    int result = 0;
    int diff = nums[1] - nums[0];
    int last_count = 0;
    for (int i = 2; i < nums.size(); ++i) {
      int new_diff = nums[i] - nums[i - 1];
      if (new_diff == diff) {
        ++last_count;
        result += last_count;
      } else {
        diff = new_diff;
        last_count = 0;
      }
    }
    return result;
  }
};