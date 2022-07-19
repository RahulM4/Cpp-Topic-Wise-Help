#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;int digits=0;
    while (n)
    {
        digits++;
        n/=10;
        
    }
    cout<<digits;
    
}