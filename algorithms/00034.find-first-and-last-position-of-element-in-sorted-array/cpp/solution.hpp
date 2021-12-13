#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
    int lower_bound = searchLowerBound(nums, target);
    if (lower_bound < nums.size() && nums[lower_bound] == target) {
      int upper_bound = searchUpperBound(nums, target) - 1;
      return vector<int>{lower_bound, upper_bound};
    }
    return vector<int>{-1, -1};
  }

 private:
  int searchLowerBound(const vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size();
    while (left < right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] < target) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    return left;
  }

  int searchUpperBound(const vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size();
    while (left < right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] <= target) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    return left;
  }
};