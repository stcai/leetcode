#define CATCH_CONFIG_MAIN
#include "../../../catch2/catch.hpp"
#include "solution.hpp"

TEST_CASE("test1") {
  MinStack s;
  s.push(-2);
  s.push(0);
  s.push(-3);
  REQUIRE(s.getMin() == -3);
  s.pop();
  REQUIRE(s.top() == 0);
  REQUIRE(s.getMin() == -2);
}
