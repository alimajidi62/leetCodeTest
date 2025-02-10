#pragma once
#include <iostream>
#include <vector>
using namespace std;
class ClearDigits
{
public:
	string clearDigits(string s)
	{
		string str = s;
		int i = 0;
		vector<char> result;
		while (i < str.length())
		{
			if (!isdigit(str.at(i)))
			{
				result.push_back(str.at(i));
			}
			else
			{
				if (!result.empty()) result.pop_back();
			}
			i++;
		}
		std::string stro(result.begin(), result.end());
		return  stro;
	}
};

