#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const int n = 1e3 + 10; // upto 10^4 can handle
int a[n][n];
ll prefix_sum_1D[n];    // 1D array sum
ll ps2D[n][n]; // 2d array sum
// Problem statment
//  Given an array of n intgers and given q queies have L anf R , print prefix sum
//  from index L to R
//  constraints
//  1<=N<=10^5
//  1<=a[i]<=10^9
//  1<=Q<=10^5
//  1<=L,R<=N
// SIMPLE APPROACH  TC-> o(n)+o(n*Q)=> o(n^2)
// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }

//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int L, R;
//         cin >> L >> R;
//         ll sum = 0;
//         for (int i = L; i <= R; i++)
//         {
//             sum += a[i];
//         }
//         cout << sum << endl;
//     }
// }

// PRE-COMPUTATION TECHNIQUE  TC-> O(n)+o(Q) => o(n)

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            ps2D[i][j] += ps2D[i][j] + ps2D[i-1][j]+ps2D[i][j-1]-ps2D[i-1][j-1] + a[i][j];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a,b,c,d;
        cin >>a>>b>>c>>d;
        cout <<ps2D[c][d]-ps2D[a-1][d]-ps2D[c][b-1]+ps2D[a-1][b-1] << endl;
    }
}