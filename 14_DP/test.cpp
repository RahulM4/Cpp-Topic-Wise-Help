#include<bits/stdc++.h>
using namespace std;


//count digits in number

int main()
{
    string str1 , str2;
    cin>>str1>>str2;
    int ans=0;
    ans += stoi(str1)+stoi(str2);
    string str3 = to_string(ans);
    cout<<str3;

}
