#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  vector<int> nums{4, 5, 6, 7, 0, 1, 2};
  int target = 0;
  int result = 4;

  Solution solution;
  CHECK(solution.search(nums, target) == result);
}

TEST_CASE("test2") {
  vector<int> nums{4, 5, 6, 7, 0, 1, 2};
  int target = 3;
  int result = -1;

  Solution solution;
  CHECK(solution.search(nums, target) == result);
}

TEST_CASE("text3") {
  vector<int> nums{1};
  int target = 3;
  int result = -1;

  Solution solution;
  CHECK(solution.search(nums, target) == result);
}

TEST_CASE("text_ext_1") {
  vector<int> nums{3, 1};
  int target = 1;
  int result = 1;

  Solution solution;
  CHECK(solution.search(nums, target) == result);
}