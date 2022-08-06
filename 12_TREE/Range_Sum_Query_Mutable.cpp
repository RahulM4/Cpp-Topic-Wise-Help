#include <bits/stdc++.h>
using namespace std;
#define ll long long

class BIT
{ // One-based indexing
    vector<int> bit;

public:
    BIT(int size = 0)
    {
        bit.assign(size + 1, 0);
    }
    int getSum(int idx)
    { // Get sum in range [1..idx]
        int sum = 0;
        for (; idx > 0; idx -= idx & (-idx))
            sum += bit[idx];
        return sum;
    }
    void addValue(int idx, int val)
    {
        for (; idx < bit.size(); idx += idx & (-idx))
            bit[idx] += val;
    }
};
class NumArray
{
    BIT bit;
    vector<int> nums;

public:
    NumArray(vector<int> &nums)
    {
        this->bit = BIT(nums.size());
        this->nums = nums;
        for (int i = 0; i < nums.size(); ++i)
            bit.addValue(i + 1, nums[i]);
    }
    void update(int index, int val)
    {
        int diff = val - nums[index];  // get diff amount of `val` compared to current value
        bit.addValue(index + 1, diff); // add this `diff` amount at index `index+1` of BIT, plus 1 because in BIT it's 1-based indexing
        nums[index] = val;             // update latest value of `nums[index]`
    }
    int sumRange(int left, int right)
    {
        return bit.getSum(right + 1) - bit.getSum(left);
    }
};

int main()
{
    vector<int> nums = {1, 3, 5};
    NumArray numArray(nums);
    numArray.update(1, 2);
    cout << numArray.sumRange(0, 2) << endl;
    return 0;
}
