#include <bits/stdc++.h>
using namespace std;
//n x m matrix
//condition -> down-buttom, right -buttom
int CountPath(int n, int m)
{
    if(n==1||m==1)
    return 1;
    return CountPath(n-1,m)+CountPath(n,m-1);
     
}

int main()
{
    int n,m;cin>>n>>m;
    cout<<CountPath(n,m);
}