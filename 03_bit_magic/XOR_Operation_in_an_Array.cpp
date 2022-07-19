#include <bits/stdc++.h>
using namespace std;

// leetcode
int xorOperation(int n, int start)
{

    vector<int> v;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        v.push_back(start + 2 * i);
    }

    for (int i = 1; i < n; i++)
    {
        v[i] = v[i - 1] ^ v[i];
    }
    return v[n - 1];
}

int main()
{
   int n, s;
   cin>>n>>s;
   cout<<xorOperation(n,s);

}