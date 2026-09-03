#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> nums = {-1,1,1,1,2,1};
	sort(nums.begin(), nums.end());
	for (int val : nums)
	{
		cout << val << " ";
	}
	int freq = 1;
	int ans = nums[0];
	int n = nums.size();
	for (int i = 1; i < n; i++)
	{

		if (nums[i] == nums[i - 1])
		{
			freq++;
		}
		else
		{
			freq = 1;
			ans = nums[i];
		}
		if (ans > n / 2)
		{
			cout<<"\n"<< ans;
		}
	}
	// cout<<"\n"<<ans;
}