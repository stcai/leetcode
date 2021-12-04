#include <algorithm>
#include <stack>
#include <utility>

using namespace std;

class Solution {
 public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    size_t target_index = nums1.size() - 1;
    while (m > 0 && n > 0) {
      const size_t nums1_index = m - 1;
      const size_t nums2_index = n - 1;
      if (nums1[nums1_index] > nums2[nums2_index]) {
        nums1[target_index] = nums1[nums1_index];
        --m;
      } else {
        nums1[target_index] = nums2[nums2_index];
        --n;
      }
      --target_index;
    }
    if (n > 0) {
      copy(nums2.begin(), nums2.begin() + n, nums1.begin());
    }
  }
};