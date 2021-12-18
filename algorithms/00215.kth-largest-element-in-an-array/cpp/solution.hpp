#include <vector>

using namespace std;

class Solution {
 public:
  int findKthLargest(vector<int>& nums, int k) {
    int begin = 0;
    int end = nums.size();
    --k;
    while (begin < end) {
      int pivot = partition(nums, begin, end);
      if (pivot == k) {
        return nums[pivot];
      }
      if (pivot < k) {
        begin = pivot + 1;
      } else {
        end = pivot;
      }
    }
    return -1;
  }

 private:
  int partition(vector<int>& nums, int begin, int end) {
    int pivot_value = nums[begin];
    int left = begin;
    int right = end - 1;
    while (left < right) {
      while (left < right && nums[right] <= pivot_value) {
        --right;
      }
      nums[left] = nums[right];
      while (left < right && nums[left] >= pivot_value) {
        ++left;
      }
      nums[right] = nums[left];
    }
    nums[left] = pivot_value;
    return left;
  }
};