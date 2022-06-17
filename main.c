#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define E 0.1 // Задание точности
void main()
{
    double sqrt(double s){ // Введение функции для вычисления корня из s

        double x, a; // Введение переменных для расчетов

        if (s == 0) // Задание чисел, корень из которых равен им же
            return 0;
        if (s == 1.0)
            return 1;

        x = s;
        a = 1;
        while (x - a > E){ // Применяем дихотомию

            x = (x + a) / 2; // Утоачняем n + 1 член
            a = s / x;

        }
        return x; // Выводим полученное значение
    }
    printf("%f", sqrt(2.0));
    return 0;
}
