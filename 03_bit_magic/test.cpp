#include <bits/stdc++.h>
using namespace std;
// int mostWordsFound(vector<string> &sentences)
// {
//     int ans = 1;
//     vector<int> vans;
//     for (int i = 0; i < sentences.size(); i++)
//     {
//         for (int j = 0; j < sentences[i].size(); j++)
//         {
//             if (sentences[i][j] == ' ')
//             {
//                 ans++;
//             }
//         }
//         vans.push_back(ans);
//     }
//     return *max_element(vans.begin(), vans.end());
// }
// int maxvalue(int arr[],int n)
// {
//     int maximum=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > maximum)
//         {
//             maximum = arr[i];
//         }
//     }
//     return maximum;
// }

int setKthBitByLeftShift(int n, int k)
{
    int maskvalue = 1, i = 0;
    while (k > i)
    {
        maskvalue <<= 1;
        i++;
    }
    if (n & maskvalue)
        cout << "SET";  
    else
        cout << "NOT";
}

int setKthBitByRightShift(int n, int k)
{
    if ((n >> k) & 1)
        cout << "SET";
    else
        cout << "NOT";
}

int main()
{
    int n, k;
    cin >> n >> k;
    cin >> k;
    setKthBitByRightShift(n,k);
    cout << endl;
    setKthBitByLeftShift(n, k);

    // cout<<maxvalue(a,n);
}