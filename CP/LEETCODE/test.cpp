#include<bits/stdc++.h>
using namespace std;

#define ll long long

//binary search
int binarySearch1(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch1(arr, l, mid - 1, x);
        return binarySearch1(arr, mid + 1, r, x);
    }
    return -1;
}

//binary search without recursion
int binarySearch2(int arr[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}




//time complexity: O(log(n))

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    cout << binarySearch1(arr, 0, n - 1, x);
    cout << binarySearch2(arr, n, x);
    return 0;
}

// Demat Account IN303028XXXXXX11


// IN303028