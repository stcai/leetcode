#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  vector<int> height{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  int result = 6;

  Solution solution;
  CHECK(solution.trap(height) == result);

  Solution2 solution2;
  CHECK(solution2.trap(height) == result);
}

TEST_CASE("test2") {
  vector<int> height{4, 2, 0, 3, 2, 5};
  int result = 9;

  Solution solution;
  CHECK(solution.trap(height) == result);

  Solution2 solution2;
  CHECK(solution2.trap(height) == result);
}

TEST_CASE("test_ext_1") {
  vector<int> height{4, 2, 3};
  int result = 1;

  Solution solution;
  CHECK(solution.trap(height) == result);

  Solution2 solution2;
  CHECK(solution2.trap(height) == result);
}

TEST_CASE("test_ext_2") {
  vector<int> height{4, 2, 1};
  int result = 0;

  Solution solution;
  CHECK(solution.trap(height) == result);

  Solution2 solution2;
  CHECK(solution2.trap(height) == result);
}