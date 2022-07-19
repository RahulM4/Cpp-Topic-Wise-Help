#include <bits/stdc++.h>
using namespace std;

int setKthBitByLeftShift(int n, int k)
{
    int maskvalue = 1, i = 0;
    while (k > i)
    {
        maskvalue <<= 1;
        i++;
    }
    if (n & maskvalue)
        cout << "SET";  
    else
        cout << "NOT";
}

int setKthBitByRightShift(int n, int k)
{
    if ((n >> k) & 1)
        cout << "SET";
    else
        cout << "NOT";
}

int main()
{
    int n, k;
    cin >> n >> k;
    cin >> k;
    setKthBitByRightShift(n,k);
    cout << endl;
    setKthBitByLeftShift(n, k);

    // cout<<maxvalue(a,n);
}