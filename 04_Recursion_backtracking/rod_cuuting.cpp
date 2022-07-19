#include <bits/stdc++.h>
using namespace std;
int cutRod(int price[], int n)
{
    int val[n + 1];
    val[0] = 0;

    // Build the table val[] in bottom up & return last entry from the table
    for (int i = 1; i <= n; i++)
    {
        int max_val = INT_MIN;
        for (int j = 0; j < i; j++)
            max_val = max(max_val, price[j] + val[i - j - 1]);
        val[i] = max_val;
    }

    return val[n];
}

int main()
{
    int n;
    cin >> n;
    int price[n];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    cout << cutRod(price, n);
}