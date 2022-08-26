float pyramid (float side)
{
	float a = 1/3;
	float b = side * side;
	float c = side;
	side = a * b * c;
	return side;
}