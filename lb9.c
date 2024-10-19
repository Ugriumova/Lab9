#define ROW 9
#define COL 9
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h> 
#include <locale.h> 
#include <math.h> 
void main()
{
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

	system("pause");
}