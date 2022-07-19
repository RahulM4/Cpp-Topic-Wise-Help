#include <bits/stdc++.h>
using namespace std;

//leetcode
int solve(int n)
{
    int cnt=0;
    while(n>0)
    {
        cnt+=(n&1);
        n=n>>1;

    }
    return cnt;
}

vector<int> countBits(int n)
{
    vector<int> ans;
    ans.push_back(0); 
    //int i=1;
    for(int i=1; i<=n; i++)
    {
        
        ans.push_back(solve(i));
    }
   return ans;
}

int main()
{
    int n;cin>>n;
    
    vector<int> v= countBits(n);
    for(auto  x: v)
    {
        cout<<x<<" ";
    }
    //solve();
    
}