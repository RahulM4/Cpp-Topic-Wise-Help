#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mod 1000000007
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


class Solution
{
public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
    {
        vector<long long int> P(n, 1);
        for (int i = 1; i < n; i++)
        {
            P[i] = P[i - 1] * nums[i - 1];
        }
        long long int R = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            P[i] = R * P[i];
            R *= nums[i];
        }
        return P;
    }
};

int main()
{
    
}
