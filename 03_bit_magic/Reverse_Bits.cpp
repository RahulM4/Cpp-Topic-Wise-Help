#include<bits/stdc++.h>
#define ll long long int
using namespace std;

long long reversedBits(long long x) {
        // code here
        bitset<32> b(x);
        string str =b.to_string<char,string::traits_type,string::allocator_type>();
        reverse(str.begin(), str.end());
        bitset<32> s(str);
        return s.to_ullong();
        
    }

int main()
{
    int x;
    cin>>x;
    cout<<reversedBits(x);
}