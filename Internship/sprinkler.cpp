#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define FIO                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

//-------------------------------------Sprinker---------------------------------------------------- //

// Problem 1 : Workload
// minimum time required to complete given work
void workload()
{

    int n;
    cin >> n;
    int arr[n];
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp[i] = arr[i];

    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      arr[i] = arr[i]-i-1;
    }
    sort(arr, arr + n);
    int median = arr[n / 2];
    for (int i = 0; i < n; i++)
    {
        ans += abs(arr[i] - median);
    }
    cout << ans << "\n";
}




int main()
{
    FIO
    workload();
    return 0;
}
