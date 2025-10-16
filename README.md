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

<img width="489" height="741" alt="Block-chema8" src="https://github.com/user-attachments/assets/8ba5ec23-c4b2-4710-bb1e-8551413a62b1" />

https://github.com/VadimShushlebin/Lab08/blob/master/Block-chema8.png

## 2. Реализация программы

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
  
	for (int i = 1; i <= n; i++)
	{
		double power = pow(x, i);
    
		double func = cos(power);
    
		res += func;
	}
  
	printf("\nИтоговая сумма = %.6f\n", res);
}
## 3. Результаты работы программы

Введите натуральное n: 5

Введите действительное x: 1.5

Итоговая сумма = 2,701512

D:\программирование\Lab08\x64\Debug\Lab08.exe (процесс 21280) завершил работу с кодом 0 (0x0).
Нажмите любую клавишу, чтобы закрыть это окно:

## 4. Информация о разработчике

Шушлебин Вадим, БТИИ-251


