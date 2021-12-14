#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  Solution solution;
  vector<int> height{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  CHECK(solution.trap(height) == 6);
}

TEST_CASE("test2") {
  Solution solution;
  vector<int> height{4, 2, 0, 3, 2, 5};
  CHECK(solution.trap(height) == 9);
}

TEST_CASE("test_ext_1") {
  Solution solution;
  vector<int> height{4, 2, 3};
  CHECK(solution.trap(height) == 1);
}

TEST_CASE("test_ext_2") {
  Solution solution;
  vector<int> height{4, 2, 1};
  CHECK(solution.trap(height) == 0);
}