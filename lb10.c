#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h> 
#include <locale.h>  
#include <math.h>
#define pi 3.14

double F1(double x) 
{
	double y;
	if (x <= 3) y = (x * x) - (3 * x) + 9;
	if (x > 3) y = 1 / ((x * x * x) + 3);

	return y;
}
double F2(double x) 
{
	double y;
	y = x * exp(sin(pow(x, 2)));

	return y;
}

double sin_n(double x, int N) 
{
	double res = 0.0;
	double ch = x; 
	for (int i = 0; i < N; i++) 
    {
		res = res + ch;
		ch =ch * ( - x * x / ((2 * i + 1) * (2 * i + 2)));
	}
	return res;
}
double sin_eps(double x, double eps) 
{
	double res = 0.0;
	double ch = x;
	int i = 0;
	while (fabs(ch) >= eps) 
    {
		res = res + ch;
		i++;
		ch = ch *(- x * x / ((2 * i + 1) * (2 * i + 2)));
	}
	return res;
}

double main()
{
	//задание 1
	double F1(double x);
	double F2(double x);
	double c, d, x;
	setlocale(LC_ALL, "RUS");
	puts("Введите значение x");
	scanf_s("%lf", &x);
	c = F1(x);
	d = F2(x);
	printf("F1(x)=%lf , F2(x)=%lf\n ", c, d);
	printf("Произведение - %lf, разность квадратов - %lf, удвоенная сумма - %lf\n", c * d, (c * c) - (d * d), 2 * (c + d));

	//задание 2
	int N;
	double eps, x1;
	printf("Введите значение x (в радианах): ");
	scanf_s("%lf", &x1);
	printf("Введите количество членов ряда для sin_n: ");
	scanf_s("%d", &N);
	printf("Введите точность для sin_eps: ");
	scanf_s("%lf", &eps);
	printf("sin(%lf)  =  %lf\n", sin(x1));
	printf("sin_n(%lf, %d) = %lf\n", x1, N, sin_n(x, N));
	printf("sin_eps(%lf, %lf) = %lf\n", x1, eps, sin_eps(x1, eps));
	return 0;

	

        return 0;
   
}