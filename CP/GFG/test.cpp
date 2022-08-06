#include <bits/stdc++.h>
using namespace std;
#define ll long long

class solution
{
public:
    long long getCount(int N)
    {
        long long count = 0;
        // Your code goes here
        // Find out the number of possible numbers of the given length
        if (N == 1)
            return 10;
        else
        {

            for (int i = 0; i < 10; i++)
            {
                count += getCount(N - 1);
            }
        }
        return count;
    }
};


bool isAnagram(string s, string t)
{
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        count[s[i] - 'a']++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        count[t[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solution s;
        cout << s.getCount(n) << endl;
    }
}