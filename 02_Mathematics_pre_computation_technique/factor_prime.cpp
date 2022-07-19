// #include <bits/stdc++.h>
// using namespace std;
// #define maxx 8e10


// //First Approach: time complexity: O(n^(1/2) log n)

// void primeFactors(int n)
// {
//     // Print the number of 2's that divide n
//     while (n % 2 == 0)
//     {
//         cout << 2 << " ";
//         n = n/2;
//     }
 
//     // n must be odd at this point. So we can skip one element (Note i = i +2)
//     for (int i = 3; i <= sqrt(n); i = i + 2)
//     {
//         // While i divides n, print i and divide n
//         while (n % i == 0)
//         {
//             cout << i << " ";
//             n = n/i;
//         }
//     }
 
//     // In case when n is a prime number greater than 2
//     if (n > 2)
//         cout << n << " ";
// }
//Second Approach: TC-> O(log n)

// void primeFactors(int n)
// {
//     int c=2;
//     while(n>1)
//     {
//         if(n%c==0){
//         cout<<c<<" ";
//         n/=c;
//         }
//         else c++;
//     }
// }
 
// int main()
// {
//    //int x;cin>>x;
//    primeFactors(1000);
// }



