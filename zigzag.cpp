#include "zigzag.h"

int Solution::movesToMakeZigzag(std::vector<int> &nums)
{
	// odd is the ans of odd index's value is smaller than neighbors
	// even is the ans of even index's value is smaller than neighbors
	int odd = 0, even = 0;
	int left = 0, right = 0, n = nums.size();
	for (int i = 0; i < n; i++)
	{
		left = i == 0 ? std::numeric_limits<int>::max() : nums[i - 1];
		right = i == n - 1 ? std::numeric_limits<int>::max() : nums[i + 1];
		if (i % 2 == 0)
		{
			even += std::max(0, nums[i] - std::min(left, right) + 1);
		}
		else
		{
			odd += std::max(0, nums[i] - std::min(left, right) + 1);
		}
	}
	return std::min(odd, even);
}
