#include <bits/stdc++.h>
using namespace std;

// int sumDigits(int n)
// {
//     int sumDigit =0;
//     while(n>0)
//     {
//         int r=n%10;
//         sumDigit+=r;
//         n/=10;
//     }
//     return sumDigit;
// }

int sumDigits(int n)
{
    if(n)
    {
        return (n%10+sumDigits(n/10)); // sumDigits() is recursive called
    }
}

int main()
{
    int n;cin>>n;
    cout<<sumDigits(n);
}