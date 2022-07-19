
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod,char to_rod, char aux_rod)
{
    if (n == 0)
    {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
    // No. of steps = 2^n-1;
}

// Driver code
int main()
{
    int n = 4;                      // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}
// No of steps => 2^n-1;
// n=2, No of steps = 3
// n=3, No of steps = 7
// n=4, No of steps = 15
