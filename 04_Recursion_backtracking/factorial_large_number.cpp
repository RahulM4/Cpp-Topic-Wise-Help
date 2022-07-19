#include<bits/stdc++.h>
using namespace std;
 
vector<int> factorial(int N){
    
    vector<int> v;
    v.push_back(1); 
    for (int i = 2; i <= N; i++) // 5 
    {
        int carry = 0;
        for (int j = 0; j < v.size(); j++)
        {                                   // 2 1
            int value = v[j] * i + carry; //1*2+0//2*3+0//6*4+0//(4*5+0 // 2*5+0)
            v[j] = value % 10;
            carry = value / 10;
        }
        while (carry != 0)
        { 
            v.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(v.begin(), v.end());
    return v;
    
    }

int main()
{
   int n;cin>>n;
   vector<int> v = factorial(n);
   for(auto x : v)
   {
       cout<<x;
   }
   cout<<endl;
   cout<<v.size();
}