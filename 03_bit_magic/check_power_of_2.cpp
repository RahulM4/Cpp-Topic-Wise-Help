#include <bits/stdc++.h>
using namespace std;
// //bit manipulation  
// efficient approach1 tc-> o(1) sc -> o(1)
// bool isPowerofTwo(long long int n)
// {
//     if (n == 0)
//         return 0;
//     if ((n & (~(n - 1))) == n)
//         return 1;
//     return 0;
// }

// bool isPowerOfTwo (long long int x)
// {
//     return x && (!(x&(x-1)));
// }

// recursion //tc-> o(logn) sc -> o(logn)
// bool isPowerOfTwo(long long int n)
// {if (n == 1)
//       return true;
     
//     // all other odd numbers are not powers of 2
//     else if (n % 2 != 0 || n ==0)
//       return false;
     
//     // recursive function call
//     return isPowerOfTwo(n / 2);}

//simple approach 
// int isPowerOfTwo(long long int n)
// {if (n == 0)
//         return 0;
//     while (n != 1)
//     {
//         if (n%2 != 0)
//             return 0;
//         n = n/2;
//     }
//     return 1;}
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{ 
    long long int n;cin>>n;
    if(isPowerOfTwo(n))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";  // boolalpha
    }

    cout << endl;
    

    // cout<<maxvalue(a,n);
}