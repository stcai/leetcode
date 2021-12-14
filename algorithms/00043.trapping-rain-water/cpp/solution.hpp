#include <vector>

using namespace std;

class Solution {
 public:
  int trap(vector<int>& height) {
    vector<int> hint(height.size());
    hint[height.size() - 1] = height[height.size() - 1];
    for (int i = height.size() - 2; i > 0; --i) {
      if (height[i] < hint[i + 1]) {
        hint[i] = hint[i + 1];
      } else {
        hint[i] = height[i];
      }
    }

    int water = 0;
    int left = 0;
    int right = 1;
    while (right < height.size()) {
      if (height[right] >= height[left] || hint[right] == height[right]) {
        water += trapRange(height, left, right);
        left = right;
      }
      ++right;
    }
    return water;
  }

 private:
  int trapRange(const vector<int>& height, int left, int right) {
    int water = 0;
    int minValue = min(height[left], height[right]);
    for (int i = left + 1; i < right; ++i) {
      water += minValue - height[i];
    }
    return water;
  }
};