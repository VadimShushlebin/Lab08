#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

#include <locale.h>

#define _USE_MATH_DEFINES

#include <math.h>

int main() {
	setlocale(LC_ALL, "RUS");
	int n;
	double x;
	double res = 0,0;
	printf("Введите натуральное n: ");
	scanf("%d", &n);

	printf("Введите действительное x: ");
	scanf("%lf", &x);
	for (int i = 1; i <= n; i++)
	{
		double power = pow(x, i);
		double func = cos(power);
		res += func;

	}
	printf("\nИтоговая сумма = %.6f\n", res);
}