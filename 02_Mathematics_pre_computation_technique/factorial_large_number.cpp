// // Using log identity.
// #include <bits/stdc++.h>
// using namespace std;

// #define MAX 1e6 //max digits

// string factorial(long long n)
// {
//     long long i;
//     long double sum = 0;

//     // Base case
//     if (n == 0)
//         return "1";

//     for (i = 1; i <= n;i++)
//     {
//         sum += log(i);
//     }
//     //cout<<round(exp(sum))<<endl;
//     string v = to_string((exp(sum)));
//     v = v.substr(0, v.size()-7);
//     // round() function is used due to floating point estimation
//     return v;
// }

// int main()
// {

//     int n;
//     cin>>n;
//     string str;
//     str = factorial(n);
//     cout<< str << endl;

// }

// //simple factorial
// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     // single line to find factorial
//     return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
// }

//
// int main()
// {
//     int n = 12;
//     cout << "Factorial of " << n << " is "<< factorial(num);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// function to calculate factorial of large number
vector<int> factorial(int N)
{
    // code here
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
    int n;
    cin>>n;
    vector<int> v = factorial(n);
    for(auto x : v)
    {
        cout<<x;
    }
}
