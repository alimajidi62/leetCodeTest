#pragma once
#include <vector>
#include <set>
using namespace std;
class MinimumOperationstoExceedThresholdValueII
{
public:
	int minOperation(vector<int>& nums, int k)
	{
		if (nums.size() < 2) return 0;
		multiset<int64_t > num(nums.begin(), nums.end());
		int64_t  result = 0;
		auto it = num.begin();
		std::advance(it, 0);
		int64_t  minmum = *it;
		int64_t  a;
		int64_t  b;
		while (minmum <  k)
		{
			auto it = num.begin();
			std::advance(it, 0);
			a = *it;
			std::advance(it, 1);
			b= *it;
			it = num.begin();
			num.erase(it);
			it = num.begin();
			num.erase(it);

			num.emplace(min(a, b) * 2 + max(a, b));
			it = num.begin();
			minmum = *it ;
			result++;
		}
		return result;
	}
};

