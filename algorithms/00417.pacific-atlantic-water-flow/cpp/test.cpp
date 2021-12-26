#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  Solution solution;
  vector<vector<int>> heights = {{1, 2, 2, 3, 5},
                                 {3, 2, 3, 4, 4},
                                 {2, 4, 5, 3, 1},
                                 {6, 7, 1, 4, 5},
                                 {5, 1, 1, 2, 4}};
  vector<vector<int>> result = {{0, 4}, {1, 3}, {1, 4}, {2, 2},
                                {3, 0}, {3, 1}, {4, 0}};

  CHECK(solution.pacificAtlantic(heights) == result);
}
