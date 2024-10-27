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
float area_round(float r) 
{
    return M_PI * r * r;
}
float area_rectangle(float a, float b) 
{
    return a * b;
}
float area_triangle(float a, float b, float c) 
{     
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
void draw_rectangle(int a, int b) 
{
    for (int i = 0; i < b; i++) 
    {
        for (int j = 0; j < a; j++) 
        {
            printf("*");
        }
        printf(" \n");
    }
}
void draw_triangle(int a, int b, char symbol) 
{
    for (int i = 0; i < a; i++) {
        int Symbols1 = (i * b) / a;
        for (int j = 0; j < Symbols1; j++) 
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
}
void draw_round(char symbol, float r) 
{
    int diameter = (int)(r * 2);
    for (int i = 0; i < diameter; i++) 
    {
        for (int j = 0; j < diameter; j++) 
        {
            float distance = sqrt((i - r) * (i - r) + (j - r) * (j - r));
            if (distance < r) {
                printf("%c ", symbol);
            }
            else {
                printf(" ");
            }
        }
        printf(" \n");
    }
}
void name(int sides)
{
    switch (sides)
    {
    case 3:
        printf("Фигура: прямоугольный треугольник \n");
        break;
    case 4:
        printf("Фигура: Прямоугольник \n");
        break;
    case 1:
        printf("Фигура: Круг \n");
        break;
    default:
        printf("Неизвестная фигура \n");
        break;
    }
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

	//задание 3
    int sides;
    float a, b, c1, r;
    char symbol;
    printf("Выберите фигуру (1 - Круг, 2 - Прямоугольник, 3 - Треугольник): ");
    scanf_s("%d", &sides);
    name(sides);
    switch (sides) 
    {
        case 1:
            printf("Введите радиус круга: ");
            scanf_s("%f", &r);
            printf("Площадь круга: %.2f \n", area_round(r));
            printf("Введите символ для рисования: ");
            scanf_s(" %c", &symbol);
            draw_round(symbol, r);
            break;
        case 2:
            printf("Введите длину и ширину прямоугольника: ");
            scanf_s("%f %f", &a, &b);
            printf("Площадь прямоугольника: %.2f \n", area_rectangle(a, b));
            draw_rectangle((int)a, (int)b);
            break;
        case 3:
            printf("Введите длины сторон треугольника: ");
            scanf_s("%f%f%f", &a, &b, &c1);
            printf("Площадь треугольника: %.2f \n", area_triangle(a, b, c1));
            printf("Введите символ для рисования: ");
            scanf_s(" %c", &symbol);
            draw_triangle(a, b, symbol);
            break;
        default:
            printf("Некорректный выбор. \n");
            break;
    }

        return 0;
   
}