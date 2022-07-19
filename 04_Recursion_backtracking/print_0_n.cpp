#include <bits/stdc++.h>
using namespace std;

void printNumbers(int n)
{
    if (n < 1) // f(n) - f(n-1) -f(n-2) -f(n-3)-f(n-4)
        return;  
    else
    cout << n << " "; // 5 4 3 2 1 
        printNumbers(n - 1);
    //cout << n << " "; // 1 2 3 4 5
}
int main()
{
    int n;
    cin >> n;
    printNumbers(n);
}