/*
 * @lc app=leetcode id=71 lang=cpp
 *
 * [71] Simplify Path
 */

// @lc code=start
class Solution {
public:
    string simplifyPath(string path) {
        string ans;
        stack<string> SK;
        string temp;
        
        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                if (temp == "..") {
                    if (!SK.empty()) {
                        SK.pop();
                    }
                } else if (temp != ".") {
                    SK.push(temp);
                }
                temp.clear();
            } else {
                temp += path[i];
            }
        }
        if (temp != "") {
            SK.push(temp);
        }

        while (!SK.empty()) {
            ans += "/" + SK.top();
            SK.pop();
        }
        if (ans == "") {
            ans = "/";
        }
        return ans;
        
    }
};
// @lc code=end

class Solution {
        public String simplifyPath(String path) {
            Stack<String> stack = new Stack();
            for (String token : path.split("/")) {
                if (!stack.isEmpty() && "..".equals(token))
                    stack.pop();
                else if (!Arrays.asList(".", "", "..").contains(token))
                    stack.push(token);
            }

            return "/" + String.join("/", stack);
        }
    }
