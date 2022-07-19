//Sieve of Eratosthenes
#include <bits/stdc++.h>
 using namespace std;
// // Time Complexity: O(n*log(log(n)))
// //Auxiliary Space: O(n)
// void SieveOfEratosthenes(int n)
// {

// 	bool prime[n];
// 	memset(prime, true, sizeof(prime));

// 	for (int p = 2; p * p <= n; p++) {//p <= sqrt(n)
// 		// If prime[p] is not changed, then it is a prime
// 		if (prime[p] == true) {
			
// 			for (int i = p * p; i <= n; i += p)
// 				prime[i] = false;
// 		}
// 	}

// 	// Print all prime numbers
// 	for (int p = 2; p <= n; p++)
// 		if (prime[p])
// 			cout << p << " ";
// }
//second method
// void printPrime(int n)
// {
//     int prime[n]={0};

//     for(int i=2; i<= sqrt(n); i++)
//     {
//         if(prime[i]==0)
//         {
//             for(int j = i*i ; j<=n; j+=i)
//             {
//                 prime[j]=1;
//             }
//         }
//     }

//     for(int i=2; i<=n; i++)
//     {
//         if(prime[i]==0){
//             cout<<i<<" ";
//         }
//     }
// }
// small prime factorization = spf

void primeFactorization(int n)
{
    int spf[100]={0};

    for(int i=2; i<=n; i++)
    {
        spf[i]=i;
        
    }

    for(int i=2; i<=n; i++)
    {
        if(spf[i]==i)
        {
            for(int j =i*i ; j<=n; j+=i)
            {
                if(spf[j]==j)
                {
                    spf[j]=i;
                }
            }
        }
        
    }


    while(n!=1)
    {
        cout<<n<<" ";
        n=n/spf[n];
    }

}
int main()
{
	int n ; cin>>n;
	primeFactorization(n);
	return 0;
}
