/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */

// @lc code=start
#define ll long long int
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        // vector<int> ans;
        // stack<int> st;
        // brute force
        //  int n1= nums1.size();
        //  int n2= nums2.size();
        //  for (int i=0; i<n1; i++) {
        //      int j=0;
        //      while (j<n2 && nums2[j]<=nums1[i])
        //       j++;
        //      if (j<n2) ans.push_back(nums2[j]);
        //      else ans.push_back(-1);
        //  }
        //  return ans;

        // Using Stack
        int n1 = nums1.size();
        stack<int> st;
        vector<int> ans(n, -1);

        for (int i = 0; i < nums1.size(); i++)
        {

            while (!st.empty() && st.top() <= nums1[i])
            {
                ans[st.top()] = nums1[i];
                st.pop();
            }
            st.push(nums1[i]);
        }
        return ans;
    }
};
// @lc code=end
