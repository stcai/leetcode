#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  Solution solution;
  vector<int> g{1,2,3};
  vector<int> s{1,1};
  CHECK(solution.findContentChildren(g, s) == 1);
}

TEST_CASE("test2") {
  Solution solution;
  vector<int> g{1,2};
  vector<int> s{1,2,3};
  CHECK(solution.findContentChildren(g, s) == 2);
}
