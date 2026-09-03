#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {2, 7, 4, 1, 3};
    vector<int> final;
    for (int i = 0; i < nums.size(); i++)
    {
        int mul = 1;
        for (int j = 0; j < nums.size(); j++)
        {
            if (i == j)
            {
                continue;
            }
            else
            {
                mul *= nums[j];
            }
        }
        cout<< mul<<" ";
    }
    
}