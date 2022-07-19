#include<bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/count-digits5716/1/#

int main()
{
    int N;cin>>N;

    //gfg
    int r=0; int originalN= N;
    int cntDigits = 0;
    while(N>0)
    {
        r=N%10;
        
        if(r!=0 && originalN%r==0)
        {cntDigits++;}
        N/=10;
    }
    //return cntDigits;
    //gfg
    cout<<cntDigits;
    
}