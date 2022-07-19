#include <bits/stdc++.h>
using namespace std;
// bit-manupulation tc-> o(n)
// int oddOccr(vector<int> &v)
//  {
//      int ans =0;
//      for(int i=0; i<v.size(); i++)
//      {
//            ans^=v[i];
//      }
//      return ans;
//  }

// Hashing tc -> o(n)
//  int oddOccr(vector<int> &v)
//  {
//      unordered_map<int, int> m;
//      for(int i=0; i<v.size() ;i++)
//      {
//          m[v[i]]++;
//      }
//      for(auto x: m)
//      {
//          if(x.second%2!=0)
//          return x.first;
//      }
//      return -1;

// }

//Brute force solution
int oddOccr(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int cnt = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                cnt++;
            }
        }
        if (cnt % 2 != 0)
        {
            return v[i];
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    cout << oddOccr(v);
}