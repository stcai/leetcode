#define CATCH_CONFIG_MAIN
#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

vector<int> sort(vector<int> &&v) {
  sort(v.begin(), v.end());
  return v;
}

TEST_CASE("test1") {
  Solution solution;
  vector<int> nums{2, 7, 11, 15};
  CHECK((sort(solution.twoSum(nums, 9)) == vector<int>{0, 1}));
}

TEST_CASE("test2") {
  Solution solution;
  vector<int> nums{0, 4, 3, 0};
  CHECK((sort(solution.twoSum(nums, 0)) == vector<int>{0, 3}));
}

TEST_CASE("test3") {
  Solution solution;
  vector<int> nums{-3, 4, 3, 90};
  CHECK((sort(solution.twoSum(nums, 0)) == vector<int>{0, 2}));
}

TEST_CASE("test4") {
  Solution solution;
  vector<int> nums{3, 2, 4};
  CHECK((sort(solution.twoSum(nums, 6)) == vector<int>{1, 2}));
}