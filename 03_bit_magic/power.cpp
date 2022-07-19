
#include <bits/stdc++.h>
using namespace std;
void printPowerSet(string &set)
{
    unsigned int pow_set_size = pow(2, set.size());
    for (int i = 0; i < pow_set_size; i++)
    {
        for (int j = 0; j < set.size(); j++)  // abc
        {
            if (i & (1 << j))  // 0,1,2
                cout << set[j];//
        }
        cout << endl;
    }
}

int main()
{
    string set;
    cin>>set;
    printPowerSet(set);
    return 0;
}
