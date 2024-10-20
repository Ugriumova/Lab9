#define ROW 9
#define COL 9
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h> 
#include <locale.h>  
void main()
{
	setlocale(LC_ALL, "RUS");
	//задание 1.1
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= COL; col++)
		{
			printf("%5d", col * row);
			printf("\n");
		}
	}
	//задание 1.2
	printf("\n");
	printf("\n");
	int x, y;
	for (x = 2; x <= 2; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			printf("%5d", x * y);
			printf("\n");
		}
	}
	for (x = 6; x <= 6; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			printf("%5d", x * y);
			printf("\n");
		}
	}
	for (x = 7; x <= 7; x++)

	{
		for (y = 1; y <= 9; y++)
		{
			printf("%5d", x * y);
			printf("\n");
		}
	}
	//задание 1.3
	int a, b;
	int n = 5;
	printf("\n");
	printf("\n");
	for (a = 1; a <= 5; a++)
	{
		if (a == 1)
		{
			printf("%5d", n * a);
			printf("%5d", n * a);
			printf("%5d", n * a);
			printf("%5d", n * a);
			printf("%5d", n * a);
		}
		if (a == 2)
		{
			printf("%5d", n * a);
			printf("%5d", n * a);
			printf("%5d", n * a);
			printf("%5d", n * a);
		}
		if (a == 3)
		{
			printf("%5d", n * a);
			printf("%5d", n * a);
			printf("%5d", n * a);
		}
		if (a == 4)
		{
			printf("%5d", n * a);
			printf("%5d", n * a);
		}
		if (a == 5)
			printf("%5d", n * a);


		printf("\n");

	}
	//задание 2

	while (1)
	{
		int s = 0;
		puts("Введите число");
		scanf_s("%d", &a);
		while ((int)a > 0)
		{
			(int)n = a % 10;
			a = a / 10;
			if (n % 2 == 0) s = s + 1;
		}
		printf("%d\n", s);

		printf("Продолжить ? (Да - y, нет - n)");
		if ((a = getchar()) == 'n') break;

	}



	//задание 3
	int d11, j;
	char sim;
	puts("Введите тип символа");
	scanf_s("%c", sim);
	puts("Введите количество символов для стороны");
	scanf_s("%d", d11);
	for (int i; i <= d11; i++)
	{
		i = j + 1;
		for (int j; j <= d11; j++)
		{
			printf("%c", sim);
		}
		printf("\n");
	}


	system("pause");
}