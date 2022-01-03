#include <vector>

using namespace std;

class Solution {
 public:
  int rob(vector<int>& nums) {
    int pre1 = nums[0];
    int pre2 = 0;
    for (int i = 1; i < nums.size(); ++i) {
      int cur = max(pre1, pre2 + nums[i]);
      pre2 = pre1;
      pre1 = cur;
    }
    return pre1;
  }
};