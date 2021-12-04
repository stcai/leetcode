#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  Solution solution;
  vector<int> nums1{1, 2, 3, 0, 0, 0};
  int m = 3;
  vector<int> nums2{2, 5, 6};
  int n = 3;
  solution.merge(nums1, m, nums2, n);
  CHECK(nums1 == vector<int>{1, 2, 2, 3, 5, 6});
}

TEST_CASE("test2") {
  Solution solution;
  vector<int> nums1{1};
  int m = 1;
  vector<int> nums2;
  int n = 0;
  solution.merge(nums1, m, nums2, n);
  CHECK(nums1 == vector<int>{1});
}

TEST_CASE("test3") {
  Solution solution;
  vector<int> nums1{0};
  int m = 0;
  vector<int> nums2{1};
  int n = 1;
  solution.merge(nums1, m, nums2, n);
  CHECK(nums1 == vector<int>{1});
}

TEST_CASE("test_ext_1") {
  Solution solution;
  vector<int> nums1{0, 0, 0, 0, 0};
  int m = 0;
  vector<int> nums2{1, 2, 3, 4, 5};
  int n = 5;
  solution.merge(nums1, m, nums2, n);
  CHECK(nums1 == vector<int>{1, 2, 3, 4, 5});
}