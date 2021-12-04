#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  Solution solution;
  vector<vector<int>> intervals{{1, 2}, {2, 3}, {3, 4}, {1, 3}};
  CHECK(solution.eraseOverlapIntervals(intervals) == 1);
}

TEST_CASE("test2") {
  Solution solution;
  vector<vector<int>> intervals{{1, 2}, {1, 2}, {1, 2}};
  CHECK(solution.eraseOverlapIntervals(intervals) == 2);
}

TEST_CASE("test3") {
  Solution solution;
  vector<vector<int>> intervals{{1, 2}, {2, 3}};
  CHECK(solution.eraseOverlapIntervals(intervals) == 0);
}
