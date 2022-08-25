#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
// 0 1 1 2 3 5 8

// Method 1 (Use recursion)  TC = exponential
ll fib1(ll n)
{
    if (n <= 1)
        return n;
    return fib1(n - 1) + fib1(n - 2);
}

// Method 2 (Use Dynamic Programming)  TC =O(n) sc -> o(n)
ll fib2(ll n)
{
    vector<ll> dp(n + 2);
    dp[0] = 0, dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
// Method 3 (Space Optimized Method 2) tc-> o(n) sc -> o(1)

ll fib3(ll n)
{
    ll f1 = 0, f2 = 1;
    for (int i = 2; i <= n; i++)
    {
        int temp = f1 + f2;
        f1 = f2;
        f2 = temp;
    }
    return f2;
}

// Method 4 (Using power of the matrix {{1, 1}, {1, 0}})
// tc -> o(n) sc -> o(1)
class fibonacci1
{
public:
    int fib4(int n)
    {
        int F[2][2] = {{1, 1}, {1, 0}};

        if (n == 0)
            return 0;

        power(F, n - 1);

        return F[0][0];
    }

    void multiply(int F[2][2], int M[2][2])
    {
        int x = F[0][0] * M[0][0] +
                F[0][1] * M[1][0];
        int y = F[0][0] * M[0][1] +
                F[0][1] * M[1][1];
        int z = F[1][0] * M[0][0] +
                F[1][1] * M[1][0];
        int w = F[1][0] * M[0][1] +
                F[1][1] * M[1][1];

        F[0][0] = x;
        F[0][1] = y;
        F[1][0] = z;
        F[1][1] = w;
    }

    void power(int F[2][2], int n)
    {
        int i;
        int M[2][2] = {{1, 1}, {1, 0}};

        for (i = 2; i <= n; i++)
            multiply(F, M);
    }
};
// Method 5 (Optimized Method 4)
//  tc -> o(log(n)) ->sc -> o(log(n))
class fibonacci2
{
public:
    int fib5(int n)
    {
        int F[2][2] = {{1, 1}, {1, 0}};
        if (n == 0)
            return 0;
        power(F, n - 1);

        return F[0][0];
    }

    // Optimized version of power() in method 4
    void power(int F[2][2], int n)
    {
        if (n == 0 || n == 1)
            return;
        int M[2][2] = {{1, 1}, {1, 0}};

        power(F, n / 2);
        multiply(F, F);

        if (n % 2 != 0)
            multiply(F, M);
    }

    void multiply(int F[2][2], int M[2][2])
    {
        int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
        int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
        int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
        int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

        F[0][0] = x;
        F[0][1] = y;
        F[1][0] = z;
        F[1][1] = w;
    }
};

//Method 6 (O(Log n) Time)
const int MAX = 1000;
int f[MAX] = {0};
int fib6(int n)
{
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);
    if (f[n])
        return f[n];
    int k = (n & 1)? (n+1)/2 : n/2;
    f[n] = (n & 1)? (fib6(k)*fib6(k) + fib6(k-1)*fib6(k-1)): (2*fib6(k-1) + fib6(k))*fib6(k);
    return f[n];
}

//Method 7 Another approach(Using formula) :
//nth term in the fibonacci series. 
// Fn = {[(√5 + 1)/2] ^ n} / √5 
// tc -> o(log(n)) sc -> o(1)
int fib7(int n) {
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}
//Method 8 DP using memoization(Top down approach)
int dpp[10];
int fib8(int n)
{
    int first, second;
    if (n <= 1)
        return n;
    if (dpp[n - 1] != -1)
        first = dpp[n - 1];
    else
        first = fib8(n - 1);
 
    if (dpp[n - 2] != -1)
        second = dpp[n - 2];
    else
        second = fib8(n - 2);
 
    // memoization
    return dpp[n] = first + second;
}
//Method 9  ( Using Binet’s Formula for the Nth Fibonacci ) 
// tc -> o(1) sc -> o(1)
int fib9(int n)
{
    double phi = (sqrt(5) + 1) / 2;    
    return round(pow(phi, n) / sqrt(5));
}
int main()
{
    ll n;
    cin >> n;
    //memset(dpp, -1, sizeof(dpp));
    cout << fib9(n);
}