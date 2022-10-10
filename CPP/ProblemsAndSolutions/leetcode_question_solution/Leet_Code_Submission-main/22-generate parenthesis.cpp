class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string curr;
        vector<tuple<int, int, int, char>> stk = {{1, n, n, 0}};
        while (!stk.empty()) {
            const auto [step, left, right, c] = move(stk.back()); stk.pop_back();
            if (step == 1) {
                if (left == 0 && right == 0) {
                    result.emplace_back(curr);
                }
                if (left < right) {
                    stk.emplace_back(3, 0, 0, 0);
                    stk.emplace_back(1, left, right - 1, 0);
                    stk.emplace_back(2, 0, 0, ')');
                }
                if (left > 0) {
                    stk.emplace_back(3, 0, 0, 0);
                    stk.emplace_back(1, left - 1, right, 0);
                    stk.emplace_back(2, 0, 0, '(');
                }
            } else if (step == 2) {
                curr.push_back(c);
            } else if (step == 3) {
                curr.pop_back();
            }
        }
        return result;

    }
};
