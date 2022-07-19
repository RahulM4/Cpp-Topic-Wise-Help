#include <bits/stdc++.h>
using namespace std;

// bool palindrome(string str, int x)
// {
//     if (x > str.size() / 2)
//     {
//         return true;
//     }
//     return str[x] == str[str.size() - x - 1] && palindrome(str, x + 1);
// }

bool isPalRec(string str,int s, int e)
{

    // If there is only one character
    if (s == e)
        return true;

    // If first and last
    // characters do not match
    if (str[s] != str[e])
        return false;

    // If there are more than
    // two characters, check if
    // middle substring is also
    // palindrome or not.
    if (s < e + 1)
        return isPalRec(str, s + 1, e - 1);

    return true;
}

bool isPalindrome(string str)
{
    int n = str.size();

    // An empty string is
    // considered as palindrome
    if (n == 0)
        return true;

    return isPalRec(str, 0, n - 1);
}

int main()
{
    string str;
    cin >> str;
    cout << isPalindrome(str);
}