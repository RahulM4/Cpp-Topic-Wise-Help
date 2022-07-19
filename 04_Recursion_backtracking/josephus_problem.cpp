#include <bits/stdc++.h>
using namespace std;

// josephus's Goli mar circle
// last person will win in circle(game of death)
int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else
        /* The position returned by josephus(n - 1, k)
        is adjusted because the recursive call
        josephus(n - 1, k) considers the
        original position k % n + 1 as position 1 */
        return (josephus(n - 1, k) + k-1) % n+1;
}

//int josephusk2(int n)
// {
//     // Find value of 2 ^ (1 + floor(Log n))
//     // which is a power of 2 whose value
//     // is just above n.
//     int p = 1;
//     while (p <= n)
//         p *= 2;
 
//     // Return 2n - 2^(1+floor(Logn)) + 1
//     return (2 * n) - p + 1;
// }


int main()
{
    int n,k;cin>>n>>k;
    cout<<josephus(n,k);
}