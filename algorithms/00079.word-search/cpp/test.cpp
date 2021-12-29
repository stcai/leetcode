#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test_sample_1") {
  vector<vector<char>> board = {
      {'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
  string word = "ABCCED";
  bool result = true;

  Solution solution;
  CHECK(solution.exist(board, word) == result);
}

TEST_CASE("test_sample_2") {
  vector<vector<char>> board = {
      {'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
  string word = "SEE";
  bool result = true;

  Solution solution;
  CHECK(solution.exist(board, word) == result);
}

TEST_CASE("test_sample_3") {
  vector<vector<char>> board = {
      {'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
  string word = "ABCB";
  bool result = false;

  Solution solution;
  CHECK(solution.exist(board, word) == result);
}