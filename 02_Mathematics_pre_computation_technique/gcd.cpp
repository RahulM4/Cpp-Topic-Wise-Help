// C++ program to find GCD of two numbers
#include <bits/stdc++.h>
using namespace std;
// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
	// Everything divides 0
	if (a == 0)
	return b;
	if (b == 0)
	return a;

	// base case
	if (a == b)
		return a;

	// a is greater
	if (a > b)
		return gcd(a-b, b);
	return gcd(a, b-a);
}

//INBUILT FUNCTION - __gcd(a,b)  => time complexity - log(max(a,b)) = log(n )


// Driver program to test above function
int main()
{
	int x, y;cin>>x>>y;

	cout<<gcd(x,y)<<endl;
	cout<<__gcd(x,y);
}
