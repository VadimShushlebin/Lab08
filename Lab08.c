#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

#include <locale.h>

#define _USE_MATH_DEFINES

#include <math.h>

int main() {
	// n = 3, x = 2; cos(2) + cos(2^2) + cos(2^3) = cos(2) + cos(4) + cos(8) = -1,21520
	setlocale(LC_ALL, "RUS");
	int n;
	double x;
	double res = 0,0;
	printf("Введите натуральное n: ");
	scanf("%d", &n);

	printf("Введите действительное x: ");
	scanf("%lf", &x);
	double power = 1;
	for (int i = 1; i <= n; i++)
	{
		power *= x;
		double func = cos(power);
		res += func;

	}
	printf("\nИтоговая сумма = %.6f\n", res);
}
