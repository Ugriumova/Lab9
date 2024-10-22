#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h> 
#include <locale.h>  

double F1(double x) {
	double y;
	if (x <= 3) y = (x*x) - (3 * x) + 9;
	if (x > 3) y = 1 / ((x*x*x) + 3);

	return y;
}
double F2(double x) {
	double y;
	y = x * exp(sin(pow(x, 2)));

	return y;
}
int factorial(int N1) {
	int f = 1;
	for (int i = 1; i <= N1; i++) {
		f = f * i;
	}
	return f;
}
double sin_n(double x1, int N) {
	double y1,k;
	int factorial(int N1); //N1 - число факториала, N - число  суммируемых k-х членов ряда
	int N1 = (2 * k) - 1;
	int l = factorial(N1);
	y1 = x1 + ((pow(-1, k - 1) * (pow(x1, (2 * k) - 1 / l)))) * N;
}
//double sin_eps(double x, double eps) {

}
 double main()
{   //задание 1
	double F1(double x);
	double F2(double x);
	double c,d,x;
	setlocale(LC_ALL, "RUS");
	puts("Введите значение x");
	scanf_s("%lf", &x);
	c = F1(x);
	d = F2(x);
	printf("F1(x)=%lf , F2(x)=%lf\n ", c, d);
	printf("Произведение - %lf, разность квадратов - %lf, удвоенная сумма - %lf\n", c * d, (c*c) - (d*d), 2 * (c + d));

	//задание 2
	double sin_n(double x1, int N);
	int N, k;
	double x1, h;
	puts("Введите значение x");
	scanf_s("%lf", &x1);
	printf("sin(x) = %2.2lf (стандартная библиотека Си)\n", sin(x1));
	puts("Введите значение x, N и k");
	scanf_s("%lf%d%d", &x1, &N, &k);
	h = sin_n(x1, N);
	printf("sin(x) = %lf (вычисление значений как сумму ряда)\n", h);
}