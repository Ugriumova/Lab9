#include <stdio.h>
#include <math.h> 
#include <locale.h>  
#define pi 3.14
//Фуекции для площадей
float area_round(float r)
{
    return pi * r * r;
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
//Функция для вывода определения
void name(int n)
{
    switch (n)
    {
    case 1:
        printf("Круг \n");
        break;
    case 2:
        printf("Прямоугольник \n");
        break;
    case 3:
        printf("Треугольник \n");
        break;
    default:
        printf("Неизвестная фигура \n");
        break;
    }
}

//Функции для рисования
void draw_triangle(int a, int b, char sim) {
    for (int i = 0; i < a; i++) {
        int Symbols1 = (i * b) / a;
        for (int j = 0; j < Symbols1; j++) {
            printf("%c", sim);
        }
        printf("\n");
    }
}
void draw_round(char sim, float r) {
    int diam = (int)(r * 2);
    for (int i = 0; i < diam; i++) {
        for (int j = 0; j < diam; j++) {
            float distance = sqrt((i - r) * (i - r) + (j - r) * (j - r));
            if (distance < r) {
                printf("%c ", sim);
            }
            else {
                printf(" ");
            }
        }
        printf(" \n");
    }
}
void draw_rectangle(char sim, int a, int b)
{
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}
int main()
{
    setlocale(LC_ALL, "RUS");
    int n, n1, a, b, c;
    float r;
    char sim1;
    printf("Введите тип символа\n ");
    scanf_s("%c", &sim1);
    printf("Выберите фигуру:\n");
    printf("1) Круг\n");
    printf("2) Прямоугольник\n");
    printf("3) Треугольник\n");
    printf("Введите номер фигуры: ");
    scanf_s("%d", &n);
    printf("Выберите действие:\n1)Рассчитать площадь фигуры\n2)Вывести определение фигуры\n3)Нарисовать фигуру\nВведите номер действия: ");
    scanf_s("%d", &n1);
    switch (n)
    {
    case 1:
        switch (n1)
        {
        case 1:
            printf("Введите радиус круга\n");
            scanf_s("%f", &r);
            printf("Площадь круга = %f", area_round(r));
            break;
        case 2:
            void name(int n);
            break;
        case 3:
            printf("Введите радиус круга\n");
            scanf_s("%f", &r);
            draw_round(sim1, r);
            break;
        default:
            printf("Некорректный выбор. \n");
            break;
        }
        break;
    case 2:
        switch (n1)
        {
        case 1:
            printf("Введите стороны прямоугольника\n");
            scanf_s("%d%d", &a, &b);
            printf("Площадь прямоугольника = %f", area_rectangle(a, b));
            break;
        case 2:
            void name(int n);
            break;
        case 3:
            printf("Введите стороны прямоугольника\n");
            scanf_s("%d%d", &a, &b);
            draw_rectangle(sim1, a, b);
            break;
        default:
            printf("Некорректный выбор. \n");
            break;
        }
        break;
    case 3:
        switch (n1)
        {
        case 1:
            printf("Введите стороны треугольника\n");
            scanf_s("%d%d%d", &a, &b, &c);
            printf("Площадь прямоугольника = %f", area_triangle(a, b, c));
            break;
        case 2:
            void name(int n);
            break;
        case 3:
            printf("Введите стороны треугольника\n");
            scanf_s("%d%d%d", &a, &b, &c);
            draw_triangle(a, b, sim1);
            break;
        default:
            printf("Некорректный выбор. \n");
            break;
        }
        break;
    default:
        printf("Некорректный выбор. \n");
        break;
    }

    return 0;
}