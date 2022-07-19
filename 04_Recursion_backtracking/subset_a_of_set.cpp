// #include <bits/stdc++.h>
// using namespace std;

// void printPowerSet(string &set)
// {
//     unsigned int pow_set_size = pow(2, set.size());
//     for (int i = 0; i < pow_set_size; i++)
//     {
//         for (int j = 0; j < set.size(); j++) // abc
//         {
//             if (i & (1 << j))   // 0,1,2
//                 cout << set[j]; //
//         }
//         cout << endl;
//     }
// }

// int main()
// {
// }
//print subset of given lemgth r;
#include <bits/stdc++.h>
using namespace std;
void printSubset(int arr[], int n, int r, int index, int data[], int i);
int main()
{
    int n, r;
    cin >> n >> r;
    int arr[n];
    int data[r];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printSubset(arr, n, r, 0, data, 0);
}
void printSubset(int arr[], int n, int r, int index, int data[], int i)
{
    if (index == r)
    {
        for (int j = 0; j < r; j++)
            cout << data[j] << " ";
        cout << endl;
        return;
    }
    if (i >= n)
        return;
    data[index] = arr[i];
    printSubset(arr, n, r, index + 1, data, i + 1);
    printSubset(arr, n, r, index, data, i + 1);
}