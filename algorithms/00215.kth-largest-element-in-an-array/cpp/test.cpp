#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  Solution solution;
  vector<int> nums{3, 2, 1, 5, 6, 4};
  int k = 2;
  int result = 5;

  CHECK(solution.findKthLargest(nums, k) == result);
}

TEST_CASE("test2") {
  Solution solution;
  vector<int> nums{3, 2, 3, 1, 2, 4, 5, 5, 6};
  int k = 4;
  int result = 4;

  CHECK(solution.findKthLargest(nums, k) == result);
}

TEST_CASE("test_ext_1") {
  Solution solution;
  vector<int> nums{3};
  int k = 1;
  int result = 3;

  CHECK(solution.findKthLargest(nums, k) == result);
}