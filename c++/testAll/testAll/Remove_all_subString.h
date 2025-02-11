#pragma once
#include <iostream>
#include <string>
using namespace std;
class Remove_all_subString
{
	string RemoveallSubstrin(string s, string part)
	{
		size_t pos = 0;
		while ((pos = s.find(part)) != std::string::npos)
		{
			s.erase(pos, part.length());
		}
		return s;
	}
};

