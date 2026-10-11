#include <stdio.h>
#include <locale.h>

int zadanie1()
{
    setlocale(LC_CTYPE, "RUS");
    float a, b, c;
    int n;

    printf("Введите три числа: ");
    scanf("%f %f %f", &a, &b, &c);

    for (n = 1; n <= 3; n++)
    {
        switch (n)
        {
        case 1:
            if (a > -1 && a < 1) {
                printf("Число %.2f принадлежит отрезку (-1;1)\n", a);
            }
            else {
                printf("Число %.2f не принадлежит отрезку (-1;1)\n", a);
            }
            break;

        case 2:
            if (b > -1 && b < 1) {
                printf("Число %.2f принадлежит отрезку (-1;1)\n", b);
            }
            else {
                printf("Число %.2f не принадлежит отрезку (-1;1)\n", b);
            }
            break;

        case 3:
            if (c > -1 && c < 1) {
                printf("Число %.2f принадлежит отрезку (-1;1)\n", c);
            }
            else {
                printf("Число %.2f не принадлежит отрезку (-1;1)\n", c);
            }
            break;
        default:
            printf("Ни одно число не принадлежит отрезку");
        }
    }

    return 0;
}
int zadanie2() 
{
    setlocale(LC_CTYPE, "RUS");
    
    float x, y;
    
    printf("Введите x:");
    scanf("%f", &x);
    
    printf("Введите y:");
    scanf("%f", &y);

    if (x >= -6 &&  x<=-3 && y >= -3 && y <= 7 || (y>=2 && y<=7  && x>=-3 && x<=-1) )
    {
        printf("Точка (%.4f;%.4f) принадлежит заданной области", x, y);
    }
    else {
        printf("Точка (%.4f;%.4f) не принадлежит заданной области", x, y);
    }
    return 0;
}