#pragma once

#include <cmath>

class Power
{
public:
	Power() = default;
	void Set(double x, double y) { this->x = x; this->y = y; };
	double Calculate() { return pow(x, y); };
private:
	double x, y;
};

