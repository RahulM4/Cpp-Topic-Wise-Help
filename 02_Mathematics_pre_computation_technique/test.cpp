#include <bits/stdc++.h>
using namespace std;

const int n = 1e7;
int arr[n];

// simple approach
//  int main()
//  {

//     int n, m;
//     cin >> n >> m;
//     while (m--)
//     {
//         int a, b, k;
//         cin >> a >> b >> k;
//         for (int i = a; i <= b; i++)   //  time complexity => o(m*n)
//         {
//             arr[i] += k;
//         }
//     }
//     cout << *max_element(arr, arr + n);
// }

// pre-compute

// int main()
// {

//     int n, m;
//     cin >> n >> m;
//     while (m--)
//     {
//         int a, b, k;
//         cin >> a >> b >> k;
//         arr[a] += k;
//         arr[b + 1] -= k;  //  tc  => o(m+n) => o(n)
//     }
//     for(int i=1 ; i<=n ; i++)
//     {
//         arr[i]+=arr[i-1];   // prefx sum
//     }
//     cout << *max_element(arr, arr + n+1);
//}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ma = max({a, b, c, d});
        if (min(a,b)>max(c,d) ||min(c,d) > max(a,b) )
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}