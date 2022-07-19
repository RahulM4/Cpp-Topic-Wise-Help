#include<bits/stdc++.h>
using namespace std;
//tc -> o(n)
void oddOccr(vector<int> &v)
{
    int a=v[0]; int f=0, s=0;
    for(int i=1;i <v.size(); i++)
    {
        a^=v[i];
    }
    int right_set_bit = a & ~(a-1);
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] & right_set_bit)
        {
            f^=v[i];
        }
        else
        {
            s^=v[i];
        }
    }
    cout<<f<<" "<<s;
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
    oddOccr(v);

} 