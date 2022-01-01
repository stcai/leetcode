#define CATCH_CONFIG_MAIN
#include <string>
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

bool compare(const vector<string>& v1, const vector<string>& v2) {
  if (v1.size() != v2.size()) {
    return v1.size() <= v2.size();
  }
  for (int i = 0; i < v1.size(); ++i) {
    if (v1[i] > v2[i]) {
      return false;
    }
    if (v1[i] < v2[i]) {
      return true;
    }
  }
  return true;
};

vector<vector<string>> sortResult(vector<vector<string>>&& result) {
  sort(result.begin(), result.end(), compare);
  return result;
}

vector<vector<string>>& sortResult(vector<vector<string>>& result) {
  sort(result.begin(), result.end(), compare);
  return result;
}

TEST_CASE("test_sample_1") {
  Solution solution;
  string beginWord = "hit";
  string endWord = "cog";
  vector<string> wordList = {"hot", "dot", "dog", "lot", "log", "cog"};
  vector<vector<string>> result = {{"hit", "hot", "dot", "dog", "cog"},
                                   {"hit", "hot", "lot", "log", "cog"}};

  CHECK(sortResult(solution.findLadders(beginWord, endWord, wordList)) ==
        sortResult(result));
}

TEST_CASE("test_sample_2") {
  Solution solution;
  string beginWord = "hit";
  string endWord = "cog";
  vector<string> wordList = {"hot", "dot", "dog", "lot", "log"};
  vector<vector<string>> result = {};

  CHECK(sortResult(solution.findLadders(beginWord, endWord, wordList)) ==
        sortResult(result));
}

TEST_CASE("test_leetcode_case_30") {
  Solution solution;
  string beginWord = "magic";
  string endWord = "pearl";
  vector<string> wordList = {
      "flail", "halon", "lexus", "joint", "pears", "slabs", "lorie", "lapse",
      "wroth", "yalow", "swear", "cavil", "piety", "yogis", "dhaka", "laxer",
      "tatum", "provo", "truss", "tends", "deana", "dried", "hutch", "basho",
      "flyby", "miler", "fries", "floes", "lingo", "wider", "scary", "marks",
      "perry", "igloo", "melts", "lanny", "satan", "foamy", "perks", "denim",
      "plugs", "cloak", "cyril", "women", "issue", "rocky", "marry", "trash",
      "merry", "topic", "hicks", "dicky", "prado", "casio", "lapel", "diane",
      "serer", "paige", "parry", "elope", "balds", "dated", "copra", "earth",
      "marty", "slake", "balms", "daryl", "loves", "civet", "sweat", "daley",
      "touch", "maria", "dacca", "muggy", "chore", "felix", "ogled", "acids",
      "terse", "cults", "darla", "snubs", "boats", "recta", "cohan", "purse",
      "joist", "grosz", "sheri", "steam", "manic", "luisa", "gluts", "spits",
      "boxer", "abner", "cooke", "scowl", "kenya", "hasps", "roger", "edwin",
      "black", "terns", "folks", "demur", "dingo", "party", "brian", "numbs",
      "forgo", "gunny", "waled", "bucks", "titan", "ruffs", "pizza", "ravel",
      "poole", "suits", "stoic", "segre", "white", "lemur", "belts", "scums",
      "parks", "gusts", "ozark", "umped", "heard", "lorna", "emile", "orbit",
      "onset", "cruet", "amiss", "fumed", "gelds", "italy", "rakes", "loxed",
      "kilts", "mania", "tombs", "gaped", "merge", "molar", "smith", "tangs",
      "misty", "wefts", "yawns", "smile", "scuff", "width", "paris", "coded",
      "sodom", "shits", "benny", "pudgy", "mayer", "peary", "curve", "tulsa",
      "ramos", "thick", "dogie", "gourd", "strop", "ahmad", "clove", "tract",
      "calyx", "maris", "wants", "lipid", "pearl", "maybe", "banjo", "south",
      "blend", "diana", "lanai", "waged", "shari", "magic", "duchy", "decca",
      "wried", "maine", "nutty", "turns", "satyr", "holds", "finks", "twits",
      "peaks", "teems", "peace", "melon", "czars", "robby", "tabby", "shove",
      "minty", "marta", "dregs", "lacks", "casts", "aruba", "stall", "nurse",
      "jewry", "knuth"};
  vector<vector<string>> result = {
      {"magic", "manic", "mania", "maria", "marta", "marty", "party", "parry",
       "perry", "peary", "pearl"},
      {"magic", "manic", "mania", "maria", "maris", "paris", "parks", "perks",
       "peaks", "pears", "pearl"},
      {"magic", "manic", "mania", "maria", "marta", "marty", "marry", "merry",
       "perry", "peary", "pearl"},
      {"magic", "manic", "mania", "maria", "marta", "marty", "marry", "parry",
       "perry", "peary", "pearl"},
      {"magic", "manic", "mania", "maria", "maris", "marks", "parks", "perks",
       "peaks", "pears", "pearl"}};

  CHECK(sortResult(solution.findLadders(beginWord, endWord, wordList)) ==
        sortResult(result));
}