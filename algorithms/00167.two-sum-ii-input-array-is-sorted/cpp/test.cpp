#define CATCH_CONFIG_MAIN
#include "../../../catch2/catch.hpp"
#include "solution.hpp"

TEST_CASE("test1") {
  Solution solution;
  vector<int> numbers{2, 7, 11, 15};
  int target = 9;
  CHECK(solution.twoSum(numbers, target) == vector<int>{1, 2});
}

TEST_CASE("test2") {
  Solution solution;
  vector<int> numbers{2, 3, 4};
  int target = 6;
  CHECK(solution.twoSum(numbers, target) == vector<int>{1, 3});
}

TEST_CASE("test3") {
  Solution solution;
  vector<int> numbers{-1, 0};
  int target = -1;
  CHECK(solution.twoSum(numbers, target) == vector<int>{1, 2});
}