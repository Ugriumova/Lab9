#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES 
#include <stdio.h> 
#include <locale.h> 
int main()
{
    setlocale(LC_ALL, "RUS");
    int a;
    char sim;
    printf("Введите сторону треугольника (количество символов): ");
    scanf("%d", &a);
    printf("Введите символ для рисования: ");
    scanf(" %c", &sim);

    // Печать верхней части треугольника
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a - i; j++) 
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) 
        {
            if (k == 1 ||  k == i)
            {
                printf("%c", sim); 
            }
            else 
            {
                printf(" "); 
            }
        }
        printf("\n");
    }
    // Печать нижней части треугольника 
    for (int i = 1; i <= a; i++) 
    {
        printf("%c", sim);
    }


	return 0;
}