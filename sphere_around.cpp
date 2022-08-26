#include <cmath>
using namespace std;

float sphere_around (float side)
{
	float a = (4/3);
	float b = 3.14;
	float c = pow (side * pow (3, 1/2), 3);
	side = a * b * c;
	return side;
}