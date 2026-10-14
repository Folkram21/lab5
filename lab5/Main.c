#include <stdio.h>
#include <math.h>

main() {
	float p = 3.0;
	float x = 4.1;

	float a, b, y;

	a = sqrt(p * x);
	b = p * pow(x, 2) + sqrt(a);
	y = pow(log(pow(b, 2)), 3) + (a * x);

	printf("y = %.1f\n", y);
}
