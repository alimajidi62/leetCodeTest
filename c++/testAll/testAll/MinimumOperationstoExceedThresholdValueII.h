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
		multiset<double> num(nums.begin(), nums.end());
		double result = 0;
		auto it = num.begin();
		std::advance(it, 0);
		double minmum = *it;
		double a;double b;
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

