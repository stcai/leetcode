#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

static bool compare(const vector<int>& v1, const vector<int>& v2) {
  const int size = min(v1.size(), v2.size());
  for (int i = 0; i < size; ++i) {
    if (v1[i] != v2[i]) {
      return v1[i] < v2[i];
    }
  }
  return v1.size() <= v2.size();
}

static vector<vector<int>> sortResult(vector<vector<int>>&& result) {
  sort(result.begin(), result.end(), compare);
  return result;
}

static vector<vector<int>>& sortResult(vector<vector<int>>& result) {
  sort(result.begin(), result.end(), compare);
  return result;
}

TEST_CASE("test_sample_1") {
  int n = 4;
  int k = 2;
  vector<vector<int>> result = {{2, 4}, {3, 4}, {2, 3}, {1, 2}, {1, 3}, {1, 4}};

  Solution solution;
  CHECK(sortResult(solution.combine(n, k)) == sortResult(result));
}

TEST_CASE("test_sample_2") {
  int n = 1;
  int k = 1;
  vector<vector<int>> result = {{1}};

  Solution solution;
  CHECK(sortResult(solution.combine(n, k)) == sortResult(result));
}