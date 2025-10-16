# Домашнее задание к работе 8

## Условие задачи

Вычислите для заданного натурального n и действительного x с использованием цикла for значение:

cos(x) + cos(x^2) + cos(x^3) + ... + cos(x^n)

## 1. Алгоритм и блок-схема
### Алгоритм
1.Начало

2.Объявить переменные:

- n - натуральное число (количество слагаемых)

- x - действительное число (основание степени)

- res - переменная для хранения результата

3.Ввести значения n и x

4.Инициализировать res = 0

5.Для i от 1 до n выполнять:

- power = x^i

- func = cos(power)

- res += func

6.Вывести результат res

7.Конец

### Блок-схема

<img width="338" height="513" alt="Block-chema3" src="https://github.com/user-attachments/assets/fccbbd32-59f4-483a-88ff-f9320f3b4e85" />

https://github.com/VadimShushlebin/lab03/blob/master/Block-chema3.png

## 2. Реализация программы

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
## 3. Результаты работы программы

Введите длину первого катета:

3

Введите длину второго катета:

4

Гипотенуза прямоугольного треугольника равна 5,00

D:\программирование\Lab3\x64\Debug\Lab3.exe (процесс 15804) завершил работу с кодом 0 (0x0).

Нажмите любую клавишу, чтобы закрыть это окно:

## 4. Информация о разработчике

Шушлебин Вадим, БТИИ-251


