#include<bits/stdc++.h>
using namespace std;


vector<int> NGR(vector<int> v1)
{
    vector<int> ans; int n =v1.size();
    stack<int> s;
    for(int i=n-1; i>=0; i-- )
    {
        if(s.empty())
        {
            ans.push_back(-1);
        }
        else if(s.size()>0 and s.top()>v1[i])
        {
            ans.push_back(s.top());
        }
        else if(s.size()>0 and s.top()<=v1[i])
        {
            while(s.size()>0 and s.top()<=v1[i])
            {
                s.pop();
            }

            if(s.empty())
            {
               ans.push_back(-1);
            }
            else
            {
                ans.push_back(s.top());
            }
        }
        else{
            s.push(v1[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;

}


int main()
{
    int x;
    cin>>x; vector<int> v1;
    for(int i =0; i<x; i++)
    {
       int y;
       cin>>y;
       v1.push_back(y);
    }
    
    vector<int> ans =NGR(v1);
    for(auto x: ans)
    {
        cout<<x<<" ";
    }


}