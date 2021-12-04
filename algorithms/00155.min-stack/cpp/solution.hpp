#include <stack>
#include <utility>
#include <algorithm>

using namespace std;

class MinStack {
 public:
  void push(int x) {
    if(s_.empty()){
      s_.push(make_pair(x, x));
    }else{
      int minumal = min(s_.top().second, x);
      s_.push(make_pair(x, minumal));
    }
  }

  void pop() {
    s_.pop();
  }

  int top() { return s_.top().first; }

  int getMin() { return s_.top().second; }

  stack<pair<int, int>> s_;
};