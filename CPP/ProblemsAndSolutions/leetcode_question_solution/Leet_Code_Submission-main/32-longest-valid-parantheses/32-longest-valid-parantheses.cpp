class Solution {
public:
  int longestValidParentheses(string s) {
    stack<int> bracketStack;
    bracketStack.push(-1);

    int longestValid = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '(')
        bracketStack.push(i);
      else {
        bracketStack.pop();
        if (bracketStack.empty())
          bracketStack.push(i);
      }
      longestValid = max(longestValid, i - bracketStack.top());
    }
    return longestValid;
  }
};
