#include <math.h>

_Bool isInArea(double x, double y)
{
	return (((abs(x) * abs(y)) <= 1) && !((x >= -1) && (x < 0) && (y <= 1) && (y > 0)));
}
