/*
 * @lc app=leetcode id=678 lang=cpp
 *
 * [678] Valid Parenthesis String
 */

// @lc code=start
class Solution {
public:
    bool checkValidString(string s) {
        
        stack<int> st1;
        stack<int> st2;
        for   (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st1.push(i);
            } else if (s[i] == ')') {
                if (st1.empty()) {
                    st2.push(i);
                } else {
                    st1.pop();
                }
            } else {
                if (st1.empty()) {
                    st2.push(i);
                } else {
                    st1.pop();
                }
            }
        }
        while (!st1.empty() && !st2.empty()) {
            if (st1.top() > st2.top()) {
                return false;
            }
            st1.pop();
            st2.pop();
        }
        return st1.empty();

        




    }
};
// @lc code=end

