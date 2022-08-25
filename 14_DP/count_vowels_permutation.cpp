#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007

class Solution {
public:
    int countVowelPermutation(int n) {
        ll dp[n+1][5];
        memset(dp, 0, sizeof(dp));
        for(int i=0; i<5; i++) 
        dp[1][i] = 1;
        for(int i=2; i<=n; i++) {
            dp[i][0] = (dp[i-1][1] + dp[i-1][2] + dp[i-1][4]) % mod;
            dp[i][1] = (dp[i-1][0] + dp[i-1][2]) % mod;
            dp[i][2] = (dp[i-1][1] + dp[i-1][3]) % mod;
            dp[i][3] = (dp[i-1][2]) % mod;
            dp[i][4] = (dp[i-1][2] + dp[i-1][3]) % mod;
        }
        ll ans = 0;
        for(int i=0; i<5; i++) ans = (ans + dp[n][i]) % mod;
        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    Solution s;
    cout << s.countVowelPermutation(n) << endl;
    return 0;
}