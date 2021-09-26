#include <math.h>

double f(double x)
{
	double result;
	x > 3 ? (result = -3 * x + 9) : (result = -pow(x, 3) / (pow(x, 2) + 8));
	return result;
}
