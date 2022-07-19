#include <bits/stdc++.h>
using namespace std;

// simple method
int solve(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt += (n & 1);
        n = n >> 1;
    }
    return cnt;
}

// Brian and Kerningham Algorithm
int solve2(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int rightmostbitmask = n & -n;

        n = n - rightmostbitmask;
        cnt++;
    }
    return cnt;
}
int main()
{
    int n;
    cin >> n;
    //cout<<__builtin_popcount(n); //3rd method
    cout << solve2(n);
}