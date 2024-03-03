#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define ZERO 0.000001
int main()
{
	double a = 0, b=0, c=0;
	double result1, result2, det;
	while(a < ZERO)
	{
		printf("Enter the coefficients of a polynomial:\n");
		scanf("%lf %lf %lf", &a, &b, &c);
	
		if (((a <= ZERO) && (a > 0)) || ((a >= -ZERO) && (a <= 0)))
			a = 0;
		if (((b <= ZERO) && (b>0))|| ((b >= -ZERO) && (b <= 0)))
			b = 0;
		if (((c <= ZERO) && (c>0))|| ((c >= -ZERO) && (c <= 0)))
			c = 0;

	}
	det = b * b - 4 * a * c; //under the sqrt 
	if (det >= ZERO-ZERO)
	{
		result1 = (-b + sqrt(det)) / 2*a;
		result2 =  (- b - sqrt(det)) / 2*a;
		if (result1 == result2)
			printf("The root is %.3f\n", result1);
		else
			printf("The roots are %.3f, %.3f\n", result2, result1);
	}
	else
		printf("There are no roots\n");

}