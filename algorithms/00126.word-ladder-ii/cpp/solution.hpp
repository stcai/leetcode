#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<vector<string>> findLadders(string beginWord, string endWord,
                                     vector<string>& wordList) {
    unordered_set<string> dict = {wordList.begin(), wordList.end()};
    if (dict.count(endWord) == 0) {
      return {};
    }
    dict.erase(beginWord);
    dict.erase(endWord);

    const int word_lenght = beginWord.size();
    unordered_map<string, unordered_set<string>> next;
    unordered_set<string> primary_queue{{beginWord}},
        secondary_queue{{endWord}};
    bool found = false;
    bool is_forword_search = true;
    while (!primary_queue.empty()) {
      vector<string> queue;
      for (const auto& word : primary_queue) {
        string target_word = word;
        for (int word_index = 0; word_index < word_lenght; ++word_index) {
          for (char new_char = 'a'; new_char <= 'z'; ++new_char) {
            const char origin_char = target_word[word_index];
            target_word[word_index] = new_char;

            if (dict.count(target_word) > 0) {
              queue.push_back(target_word);

              if (is_forword_search) {
                next[word].insert(target_word);
              } else {
                next[target_word].insert(word);
              }
            }
            if (secondary_queue.count(target_word) > 0) {
              found = true;
              if (is_forword_search) {
                next[word].insert(target_word);
              } else {
                next[target_word].insert(word);
              }
            }

            target_word[word_index] = origin_char;
          }
        }
      }

      if (found) {
        break;
      }

      for (const auto& word : queue) {
        dict.erase(word);
      }

      if (queue.size() <= secondary_queue.size()) {
        primary_queue = {queue.begin(), queue.end()};
      } else {
        primary_queue = secondary_queue;
        secondary_queue = {queue.begin(), queue.end()};
        is_forword_search = !is_forword_search;
      }
    }

    vector<vector<string>> result;
    if (found) {
      vector<string> path{beginWord};
      assembleResult(beginWord, endWord, next, path, result);
      return result;
    }
    return result;
  }

 private:
  void assembleResult(const string& beginWord, const string& endWord,
                      const unordered_map<string, unordered_set<string>>& next,
                      vector<string>& path, vector<vector<string>>& result) {
    if (beginWord == endWord) {
      result.push_back(path);
      return;
    }

    auto it = next.find(beginWord);
    if (it == next.end()) {
      return;
    }
    for (const auto& s : it->second) {
      path.push_back(s);
      assembleResult(s, endWord, next, path, result);
      path.pop_back();
    }
  }
};