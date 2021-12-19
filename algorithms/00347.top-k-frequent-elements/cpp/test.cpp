#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  Solution solution;
  vector<int> nums{1, 1, 1, 2, 2, 3};
  int k = 2;
  vector<int> result = {1, 2};

  CHECK(solution.topKFrequent(nums, k) == result);
}

TEST_CASE("test2") {
  Solution solution;
  vector<int> nums{1};
  int k = 1;
  vector<int> result = {1};

  CHECK(solution.topKFrequent(nums, k) == result);
}