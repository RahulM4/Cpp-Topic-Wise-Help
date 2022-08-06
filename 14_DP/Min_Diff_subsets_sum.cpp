#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


class Solution {
    public:
    int solve(vector<int> &A);
};

int dp[100][100];
int Solution::solve(vector<int> &A) {
    int n = A.size();
    //You need to divide the array A into two subsets S1 and S2 such that the absolute difference between their sums is minimum.
    for(    int i = 0; i < n; i++) {
        dp[i][0] = A[i];
    }
    for(int i = 1; i < n; i++) {
        for(int j = 1; j <= i; j++) {
            dp[i][j] = INT_MAX;
            for(int k = 0; k < j; k++) {
                dp[i][j] = min(dp[i][j], dp[i-1][k] + dp[j][j-k]);
            }
        }
    }
    return dp[n-1][n-1];
}


int main()
{
    FIO;
    vector<int> A = {1,6,11,5};
    Solution s;
    cout << s.solve(A) << endl;
    return 0;
}