# Домашнее задание к работе 6

## Условие задачи
1.Даны три вещественных числа. Выбрать из них те, которые принадлежат интервалу (-1, 1).

2.Составить программу, которая проверяет принадлежит ли заданная пользователем точка с координатами (х, у) заданным закрашенным (заштрихованным) областям, показанным на рисунках в табл., и выводит на экран сообщение.
<img width="265" height="256" alt="{A8DF7B03-C740-4ADB-9890-2A45342E092C}" src="https://github.com/user-attachments/assets/c34ff1c1-5942-4124-a967-885eb75f6f75" />

## 1. Алгоритм и блок-схема

1. Начало программы.
2. Установка русской локализации.
3. Объявление вещественных переменных `x` и `y`.
4. Ввод координаты `x`.
5. Ввод координаты `y`.
6. Проверка, принадлежит ли точка `(x; y)` заданной области:
- Если `x >= -6` и  `x<=-3` и `y >= -3` и `y <= 7`, то точка принадлежит области.
- Или если `y>=2` и `y<=7`  и `x>=-3` и `x<=-1`, то точка принадлежит области.
7. Если условие выполняется, вывести сообщение: `«Точка принадлежит заданной области»`.
8. Если условие не выполняется, вывести сообщение: `«Точка не принадлежит заданной области»`.
9. Завершение программы.

### Блок-схема

<img width="567" height="639" alt="{FEEA9775-688A-43CC-9DB3-BED086616F76}" src="https://github.com/user-attachments/assets/f4773e7b-e5cf-4f08-86d1-45c370bb6fce" />

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22ftJ76jVqvtfw3Rg9ueoT%22%3E3Vhdb9owFP01kboHpjhODHmkQLuXSZV42ProJiaJlGBkTAn79bMTGzsJbQPNWFsJGfv6Xn%2Bcc3xtcOCsKO8Z3qQ%2FaUxyx3Pj0oFzx%2FNAELriS1oOtWUCYW1IWBYrJ2NYZn%2BIMqq4ZJfFZNtw5JTmPNs0jRFdr0nEGzbMGN033VY0b866wQnpGJYRzrvWX1nMU7ULb2zsP0iWpHpmgMK6p8DaWe1km%2BKY7i0TXDhwxijlda0oZySX4Glc6ri7F3qPC2NkzfsEeN0ANcaWH%2FR2RYhAVjRu92nGyXKDI9mzF%2BQKW8qLXLSAqNaRzzjfqUhn7jrhXJa3riNcJmNdF%2BVtVS5UEGGclNYK1HrvCS0IZwfhklqQIoXf3sAPtE2NAjXGSmS%2BamJFfnIc2eAjKgqi03D5feASnG5kVXjhPCc5TRguBDobwjIxI2HtvgfT8RbCq6wk%2BkCcRLx0vFm15yuhCiYDwBr0gZWltHjabS9QocBELBLhQjomXLpIuztCdkdddpoSytPR8Ozo3ET3mRpV%2Fk9M1Kp5b25eWgvos5TyhaWMwDfZM57Jj%2BfenFjye2fwvlVTwLuLZAm8ri6POlTDHI%2B30iUc4rijD3%2FcZQqdeiqRmgQ7VWnWqzPtXdVV1ydVObfysG9l46AqkfYUUV5Xh3o6UQIrts7wQEXVIwyVhSZNtkErCwXuAGyPvwbb9X0bBl%2BW%2FCPZQ5IfXuEhNLWwm2vEBV7oWpc1GgIp%2FQgnceeR3MWO7lhEGk9NG851PJWvcdGKcrzdZlETRVJm%2FLeou98D1Xq0euZyk65uHHRjLbZjBcnmo91nwqqWjqsXxzFLCG%2B89WwS3%2BQkUNgwkmOePTfxsYgKXuFBzfBAMwHmkUq%2FJXrQvt%2FqpauoFpvH1fYj2LuMYP%2BTERz8J4J7HzR4GQ%2FB5TxYLBhOhuVB7maplkYZT2lC1zhfGOsJplCXKZlPfX3vDc2aOnMjsTU4CRrnbgTOPrrAfX0EulptybsPrX9tsYAPKpbxabHYF%2B4%2FOOhGMij0YDNV91fMsJIILpMEuk4ef5NaI5qGZIyCemf68AqZ3ghA%2FLgPz80RsPXzFbUvkAGvd3SZLMYfTRbgk8ki8INzZeG3ZYGGkoVomn%2BZa3fzXz1c%2FAU%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
## 2. Реализация программы
Программа написана на языке **C++**.

```cpp
#include <stdio.h>
#include <locale.h>

int main() 
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
```
## 3. Результаты работы программы
```text
Введите x:-1
Введите y:2
Точка (-1.0000;2.0000) принадлежит заданной области
```
## 4. Информация о разработчике
```text
Имя: Коноваленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
