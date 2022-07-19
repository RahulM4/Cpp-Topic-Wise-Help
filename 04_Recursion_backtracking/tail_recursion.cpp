// An example of tail recursive function
#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
	if (n < 0) return;
	cout << " " << n;

	// The last executed statement is recursive call
	print(n-1);
}
// What is tail recursion? 
// A recursive function is tail recursive 
// when a recursive call is the last thing executed by the function. 
// For example the following C++ function print() is tail recursive. 