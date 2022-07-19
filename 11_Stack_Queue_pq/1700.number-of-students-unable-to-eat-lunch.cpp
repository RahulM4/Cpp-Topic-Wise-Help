/*
 * @lc app=leetcode id=1700 lang=cpp
 *
 * [1700] Number of Students Unable to Eat Lunch
 */

// @lc code=start
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int ans = 0;
        int n = students.size();
        queue<int> q(deque<int>(students.begin(), students.end()));

         int index=0;
        int cnt= 0;
        while(!q.empty()){
            int curr= q.front();
            q.pop();
            if(curr != sandwiches[index]) cnt++,q.push(curr);
            else cnt= 0,index++;
            if(cnt== q.size()) break;
        }
        return q.size();
    }
};
// @lc code=end

