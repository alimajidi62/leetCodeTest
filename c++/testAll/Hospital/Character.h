#pragma once
#include <string>
struct Point
{
	int x;
	int y;
};
class Character
{
public:
	Character();
	Character(std::string name, int Health_points,Point point);
	Character(std::string name, int Health_points);
	std::string GetName() const { return name; }
	Point GetPoint() const { return point; }
	int GetAge() const { return Health_points; }
	virtual void performance()=0;
	void SetPerformance (std::string performance) {
		this->m_performance = performance;
	}
	std::string getPerformance () {
		return m_performance;
	}

private:
	std::string name;
	int Health_points;
	Point point;
	std::string m_performance;
};

