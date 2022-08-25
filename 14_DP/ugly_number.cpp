#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
// ugly numbers are thr numbers whole prime factors are 2, 3 or 5.
//  The first 10 ugly numbers are 1, 2, 3, 4,5,6, 8, 9, 10 ,12
// by convention 1 is included
//  Given a number n , print the nth ugly number

int main()
{
    int n;
    cin >> n;
    int c2(0), c3(0), c5 (0);
    vector<int> dp(n + 1);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = min({2 * dp[c2], 3 * dp[c3], 5 * dp[c5]});

        if (dp[i] == 2 * dp[c2])
            c2++;
        if (dp[i] == 3 * dp[c3])
            c3++;
        if (dp[i] == 5 * dp[c5])
            c5++;
    }
    cout << dp[n - 1];
}