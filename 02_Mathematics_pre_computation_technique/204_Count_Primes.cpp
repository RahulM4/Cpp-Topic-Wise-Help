#include <bits/stdc++.h>
using namespace std;
#define ll long long int

// int isPrime(int n)
// {
//     if (n <= 1)
//         return 0;
//     for (int i = 2; i <= n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int countPrimes(int n)
// {
//     int cntPrimes = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         if (isPrime(i) == 1)
//         {
//             cntPrimes++;
//         }
//     }
//     return cntPrimes;
// }

int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);

    prime[0] = prime[1] = true;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for(int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = 0;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout<<countPrimes(n);

    
}