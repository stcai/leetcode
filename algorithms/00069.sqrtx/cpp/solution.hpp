class Solution {
 public:
  int mySqrt(int x) {
    if (x == 0) {
      return 0;
    }

    int l = 1;
    int r = x;
    while (l <= r) {
      int mid = l + (r - l) / 2;
      int sqrt = x / mid;
      if (sqrt == mid) {
        return sqrt;
      } else if (sqrt < mid) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }
    return r;
  }
};

// Newton's method
class Solution2 {
 public:
  int mySqrt(int x) {
    long sqrt = x;
    while (sqrt * sqrt > x) {
      sqrt = (sqrt + x / sqrt) / 2;
    }
    return sqrt;
  }
};