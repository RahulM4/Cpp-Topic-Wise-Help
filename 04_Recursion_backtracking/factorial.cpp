#include<bits/stdc++.h>
using namespace std;
long long int factorial(int n)
{
    if(n<2)
    {
        return 1;
    }

    return n*factorial(n-1);  //recursion
}
    
  
int main()
{
   int n;cin>>n;
   cout<<factorial(n);
  
}