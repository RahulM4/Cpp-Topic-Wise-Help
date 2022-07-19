#include <bits/stdc++.h>
using namespace std;


int main()
{
   
    //bit set inbuilt function
    //set(n,i) sets the ith bit of n to 1
    bitset<8> bs;
    bs.set(0);  
    bs.set(1);
    bs.set(2);
    bs.set(3);
    bs.set(4);

    cout<<bs<<endl;
    bs.flip();  
    cout<<bs<<endl;
    
    //count set bits
    cout<<bs.count()<<endl;
    //check if bit is set
    cout<<bs.test(0)<<endl;
    //convert number to bitset
    cout<<bitset<32>(5)<<endl;
    //convert bitset to number
    cout<<(int)bs.to_ulong()<<endl;
    //clear bit
    bs.reset(0);
    cout<<bs<<endl;
    //clear all bits
    bs.reset();
    cout<<bs<<endl;
    //clear all bits and set it to 1
    bs.set();
    cout<<bs<<endl;
    //clear all bits and set it to 0
    bs.reset();
    cout<<bs<<endl;
    bs.all_set();
    cout<<bs<<endl;
    
    

}