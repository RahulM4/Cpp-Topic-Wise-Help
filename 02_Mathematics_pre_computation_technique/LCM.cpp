#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin >> n;
        int a, b, c = 1;
        if (n % 2 == 0)
        {
          
            a = n / 2 - 1;
            b = n / 2;
        }
        else
        {
            a = n / 2 + 1;
            b = n / 2 - 1;
            if (a % 2 == 0)
            {
                a++;
                b--;
            }
        }
        cout << a << " " << b << " " << c << endl;
    }
}