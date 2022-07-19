#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    int ans = 0, x = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            x++;
        }
        if (s[i] == ')')
        {
            x--;
        }
        if(s[i]!='(' or s[i]!=')')
        {
            ans = max(ans,x);
        }
    }
    return ans;
}

int main()
{
    string s;
    cin>>s;
    cout<<maxDepth(s);

}