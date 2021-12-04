#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  Solution solution;
  vector<int> ratings{1, 0, 2};
  CHECK(solution.candy(ratings) == 5);
}

TEST_CASE("test2") {
  Solution solution;
  vector<int> ratings{1, 3, 4, 5, 2};
  CHECK(solution.candy(ratings) == 11);
}
