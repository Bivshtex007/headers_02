#include <iostream>
#include <cmath>
#include "cube.h"
#include "sphere_around.h"
#include "sphere_inside.h"
#include "pyramid.h"
using namespace std;

int main()
{
	float side;
	cout << "Enter Leght of the Side of the Cube" << endl;
	cin  >> side;
	cout << "Volume of Cube ith this Side will be = "         << cube         (side) << endl;
	cout << "Sphere around such Cube would have a volume of " << sphere_around(side) << endl;
	cout << "Sphere inside such Cube would have a volume of " << sphere_inside(side) << endl;
	cout << "Pyramid inside the Cube will have a volume of "  << pyramid      (side) << endl;
	return 0;
}