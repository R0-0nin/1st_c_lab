#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define E 0.1 // ������� ��������
void main()
{
    double sqrt(double s){ // �������� ������� ��� ���������� ����� �� s

        double x, a; // �������� ���������� ��� ��������

        if (s == 0) // ������� �����, ������ �� ������� ����� �� ��
            return 0;
        if (s == 1.0)
            return 1;

        x = s;
        a = 1;
        while (x - a > E){ // ��������� ���������

            x = (x + a) / 2; // ��������� n + 1 ����
            a = s / x;

        }
        return x; // ������� ���������� ��������
    }
    printf("%f", sqrt(2.0));
    return 0;
}
