#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/palindrome-number/

// leetcode
bool isPalindrome(int x)
{
    if (x == 0)
        return true;
    if (x < 0)
        return false;
    else
    {
        int rev = 0;
        int originalX1 = x;
        while (x > 0)
        {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        if (originalX1 == rev)
        {
            return true;
        }
        else
            return false;
    }
}

int main()
{
    int x;
    cin >> x;
    cout << boolalpha << isPalindrome(x);
}