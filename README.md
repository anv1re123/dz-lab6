# Домашнее задание к работе 6

## Условие задачи
1.Даны три вещественных числа. Выбрать из них те, которые принадлежат интервалу (-1, 1).

2.Составить программу, которая проверяет принадлежит ли заданная пользователем точка с координатами (х, у) заданным закрашенным (заштрихованным) областям, показанным на рисунках в табл., и выводит на экран сообщение.
<img width="265" height="256" alt="{A8DF7B03-C740-4ADB-9890-2A45342E092C}" src="https://github.com/user-attachments/assets/c34ff1c1-5942-4124-a967-885eb75f6f75" />

## 1. Алгоритм и блок-схема

## Задание 1

### Алгоритм

1. Начало программы.
2. Подключение русской локализации.
3. Объявление вещественных переменных `a`, `b`, `c` и целочисленной переменной `n`.
4. Ввод трёх вещественных чисел `a`, `b`, `c`.
5. Присвоение переменной `n` значения 1.
6. Проверка условия `n <= 3`.
7. Выполнение оператора `switch(n)`:
- Если `n = 1`, проверить, принадлежит ли число `a` интервалу `(-1; 1)`. Вывести соответствующее сообщение.
- Если `n = 2`, проверить, принадлежит ли число `b` интервалу `(-1; 1)`. Вывести соответствующее сообщение.
- Если `n = 3`, проверить, принадлежит ли число `c` интервалу `(-1; 1)`. Вывести соответствующее сообщение.
- Если ни один вариант не подходит, вывести сообщение `«Ни одно число не принадлежит отрезку»`.
8. Увеличить значение `n` на 1.
9. Вернуться к проверке условия `n <= 3` и повторять действия, пока условие истинно.
10. Завершение программы

## Задание 2

### Алгоритм

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
### Задание 1
[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=gost-flowchart%20(1).drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22Page-1%22%20id%3D%22Page-1%22%3E7V1bc6q%2B1%2F40ndn7ok5CwulSRa22tlVrbb15BwGVimARj5%2F%2BDSflYFulqPz2nz17LIYkkuRZT1bWygo3qDxd10xxNm4asqLdUEBe3yDhhqIoDAD5Y6ds3BRI0YybMjJV2UvbJ3TUreIlegVHC1VW5qGMlmFoljoLJ0qGriuSFUoTTdNYhbMNDS38qzNxpMQSOpKoxVN7qmyN3VSOYvfpd4o6Gvu%2FDBnevTMV%2FcxeS%2BZjUTZWgSRUuUFl0zAs92q6Liua3Xt%2Bv7jlql%2Fc3T2YqejWgQLduWI%2BDT7sPqGAJg7IwDiZvD4UR17H3Ajgpojtz1LF%2BXQz7X6H2j3q7hGCv%2Bk9xtza%2BD22nMvrukCu4Q0qDVVNKxuaYTr3UNX5R9JHpiirpBL%2Fnm7opHiJ9NHMrmZuKbqkan%2Fkd%2F5BMIojodJ%2BBlvUqW8EZQQ63faoR6orPSz4SZnlGk%2F0lLJkqvw56vWp94euupqN53cLWH6%2F69WfunSDetQe6mVYL3%2BW%2BTuqKW5I4f4L%2BRi0xu9wLML50934SStOZttP2ayVtg3Sj%2Fj%2BVbmv9lFRwhT7jIT%2B4wNJLX58lp1RRMJf8sQzQ9Utpyvp0g1NUktOX5dEaTIyjYUuR1ropCl23wLybWxNNa%2BnVmPVUjozUbLbvyLSRNLcvl0qpqWsA93tjUZNMaaKZZK2gHEAgoh2i3klMIfc774EclzByyF6EBjtKtrDh1x44%2B1%2FDQAqVYChxACjcoBlEGAUi7IFMJwYYCgHWAYBhmg2WwCjEwMM5wDLIMBYnDGAsYkBxuQAyyDAOASzBTA%2BMcC4HGAZBBiDMsZgECRGGJ8jLAMIg9DVo%2FccljUtDP7CUpGbKjKJMR5nbJ6EydeSMF9MZhJjmVP2YfLlJMzXk5nAGIZUhMe4TCEs%2BXoS5gvKTCIMAkRlCmLJV5QwX1JmEmIcyhSJhZp0ot8I5AjLIsIgYLIFsV%2B4JnPf5FUgBjETwhjLwrAmRmcLYcnXk1QK68nhIYStWl1jVCfdX32ESqckiVUCFQ9jqrp5lSvFPjudNBtLgenVSwq5K0hKb9G5h91SZ1Jcj6edaVUQl5vu8HVzP%2BjNH6THBgfhx0O3v1XZDV3sl%2B065SFT5N%2FXb0%2FFuQlZtC3Ddp0kj5bFSqbwtdrv%2B2Ew%2FBZeEAKcKXwxyfFF5wx2DQbbbZDziyAQVsOytZb8hW%2BSSmEtmTPYLxkMASbMYFTGZkguOb7YnMEyoOZHfZM0lTGDK0q%2BkkT5SjKLEMOYyhjEkvsmUe6bzCLEIMjYLleU3FiBcmNFFiAW1fQhxOx5EcZoJEtJVpchYDCfCzsmpTQ0dOt27kTkFEkGOFvv75GrkfdX8%2FMeVQkqsAypyC4JnHtDcapqG%2FduWdTUgam6dyV3OOx0czT4Q%2FqGNA74f%2F66mWTVJO1SDd3NqFmmm64plqWYt3MySqo%2Bcm8C%2F3c1VVdu%2FYFwnsoOnaHdm4ZdxPIeCLpNjDaaIIIXHCEENwQSHOtfk8%2BSJ6JexwzMaFeREXJ7K5bsDISfeqL0n25IIlhVJVErauqI9J4wVWXZvlcSvQSJFFbs7jRI1qHmhC55C4nSnjpSsEKZ%2FRf5w2iOKvXecGzNG83nbV2WLf5jI8J7Rn9dmzPSOQMiC6XNurZpy83ORN4Iw5c6c4dfBAn1lx9mT%2BwgThkv%2BfaQZP5oUcIzyWdxkFeEO1F6W63uSog1hsxQGZEMC%2B1ZQpgpCfcEMVR1PWGGTYlZdWuzbvmNJnxT3dqiRKqu9GieX5XeBLM1G%2FdBZSrVyw%2F1ijmv9sq1dR3h6oPcMu7a7Uql%2BtmeNVYtukmNgSU9P3Gtu7KCG8amMbUW9PNq25frVuMFbGfWffG1Up0uK8%2FFh6HEMJ1nPKyNp3Ma40V7W38lTa33zMfP0Vu3ie%2FN9xq9nsysKl28N0TmdcW88xruT5cNeit8LrfDWflx2Gs1J3LvbapNn0qTMtWjOuVBc8Zog5E4rA0%2Fa8Oh9VFr3ZHlVOmt%2FLLm1cX0cWz72jJKjrRHjoG1K8Wg8NqVjljfEH%2FuOTlnzESMKbrPMHD%2FSO4f%2FdIcebopIR2OTMEO8dEX5PK8vhIIRzZM6aPx%2BTBX5iyq3W%2B2K%2FnzyVwy%2FFKEJb18vyFUM3naVOhVE04WfKWI%2B231qfFp8k2iguFSfSm8trvaoPjwVtyOa6OnZn%2FN2yT49l4d3BtdVu0KL0MI2z1LxfrKHEHuVbc0fTjqL0CDjHT%2FffAiDbnmkqtwQ415ts1nczQmNTwZ423NapN%2Brs5gczCdfiIBF7PJL74Z9QR%2BofD%2FNr9cR9ny2jMzla%2BbE3xkckuc2rDwMpTFuURkjFAQaBq6Eb0daPi%2BU%2FiZFaNUzW7CrSyakz9xdiXT1V%2F3yr7nTF5e8v7%2B34PtG5L6KfBHt5%2FcbpfXDUAPNsVlP%2Bc22t0mf0p%2FA9To9NAlePT0vT3p8GgKG4M%2B%2BneErOqjSqVDOqG%2F4Aevs6VCsFGlnhufvU1FrI3F57fluMc0YftDGLQGyktzVIRNZqpvW4Zee171WbSqFFGrSHi1j15G01K7VeI7T8%2BL8QtXlZBqL0mZl1ofcoOhJDVk6VVR6itDfn97hO1O01q0tiLbNRs2NVQERIvUknki18pitrKGXI1clvoNLGyVjTV4YPklzTJ3rYkOXuRKphe0CTgV0f%2FbnJpdnW2%2BUi1p%2FEf%2Fe1YywacHBqVDJimEFen90oNgtAiZtJ8BWkzwSu8u3pXGfQm0BeH%2BA2l0naCpqjaklxp7r49fO2151FQ05rUsVKsPWxN214%2BgXtQ6Fa13D7jx%2Fbx4P6%2Bp8isN0Ru%2FWN0RircqjY8efqNm708N5aHaqKp9ablYMa2xsqlvpe7btmovj3uLiTSkBvzggWp113hi1aTmg24vhpcTrqXr4ydTaGWZPFh8MnlgJiePbJKHJM4V5%2BZZueN0x10q3IFT8Prl3HFh7mBx2LpOM2d3Q%2Bfc8RvuoM7LHVcymOMUDOY5d1yZO1jqX9M79sQRZo09Zez5AgHnn%2FN4e3pwuSFGDC4rhClhxwd7MoDx5x8EDSBei8AtDKa6n7GvIFTUI4u9LmKbm6sXsZTg00M50yEZnJPMf45kIOD%2FdZb5xzQUdF7yuJK7CqfgrsrJ48oaCsf%2Ba9yRQQ1FSq6hhIpeU0O5ki8Hp%2BDLyUnm2hrK1VkmAadcRGH4xm982Dcc8B3b876TbIeyehdf%2BI79xpKH1g82drDD023giSxT1Oe%2BlB%2Fwfgd1tB%2F6d%2BgCb5%2FPp%2BNDZPkTj7nNOLJpMd3xTtGWik1Nh9tE%2BWN5XJ%2FE2l2hbjiO%2FP9zaw8x%2FPvDc5%2BFrekrGbzpFAze%2BQ6mtBl7v9sxwNkcCFM2ZtkwZecus4wuKp1d5cWQ8NuftLPDnDkvr5wenpQOr6QQ25TvHs93jyfaPR5dMu9f3ZITY6aIUUy%2BzA4VPbjMvoDW9jKtj41lT1gsHjsvm8%2FKx6C5vmVy10C%2B8E688E5t80LstVKHweqdEaHIsZdlfYdYRZeL9iu4bGxq4nyuSuEuDPet13mitlB8wvyR5b1eMRVNtNRl%2BNkC%2FUmHleJbUAAs981BPc6vkke3o093GTzkBLp3un62024CQcJUeErhcXSY5sbClBSv3AlVUThWlSWaI8WKVeUM%2Bq7DDuHgyEFn80FPMugoHhmedNARHavq3IPO5YOeZNAxTG3QMXPxQedPGHSnVd6T%2Bm82TAoEZa1ab%2FZ1AfO09%2F3dzlkAgPK%2BC%2BtAZmET%2BPKsmCppuq3yuGk66Qa7OnvUAeOnvHs%2FsEvY1%2Bh82wS%2FReu88XQ9u%2F%2F94boofDkaocTw%2FQpwsAA5sP8XPgGK3dmVvkZsWBvhIVOgIsB0H%2BpweRqAAkRo%2FwDhE9kZyJPhYvndv2RyRUeOU%2BB5uoAuK1gsuACb7mB%2FEPV8SqiHF0D9lwj%2FEYEMwAWMkuGEYaN1xSyk54YJdWmY4ChMcEowwZmGCcswBZ%2FtToVJbA%2BobUhnL4sTlHCe%2FjV2vHk6OC%2F7yOGSz9MEic6bd0JI5NJB4jdGl8zAEwIQeW1X9PTYY8EJAf9DTeeGJk4ITZwWNCOwxL%2BCJRVGJQ3SUh4zDkCWSciOMQDGajo3AOmEAORSAiAo8DwbAiENfgdCyEdRmNYszWcbhWQ9kRIKYzWdG4Xs16DbA2xumcZE6Xl9RoXR5Rvbp%2BuRKc7GBduQL41F0yqIum5You19%2BT8qYPbXlKHlm7GfjbnqumcE0x061%2BCtmJWl4tq94VcGmNPP2kdxJ5s%2FD%2ByOtKMjh7%2Bi04%2B0O67ruaN05v%2FhrmeiC%2Bn0up7Ku%2F7brufw2boeHdP1pH3Wz94rd4Ai%2Fq%2Bgq9BLivkbv%2FRM%2FmT2tXe8YO%2FsxCRj4Vt4guebg%2BhQRJZt8dV9eoOB88E4aTCSbUY7cjDofDBOGgw60elmRw4G818fjOBmvGQTR4IhYaiY0ze9ITlKVc2HJDp%2FcGeUEi4fkgRDwic69vXIIUnqGk3L5Lrz4ezMCnszQyKzQsAlZNd3G3IH%2FFPWfy7yci4m%2FjbxYw0L0apYKlbVmS0L%2FgawqxlYoz56G4jM74AYcVYC52zL%2F4qLPjkOueQbhGJV8RfHIUyIw7T2ijiEFXVC%2FQKITn101NJKpYPEg10IwSW8APstJCyiIlbQX28hoUA4qogGkR0gP5ZgKXBSfv7E%2FBBgtuApVEeXgTxTYEJlftjJgqhoPyTcrAJpHHv%2BCNEkFuw8ICHt4z%2F8YFD%2BQDDoheIH%2BCudX5aHgmYxhiBRKCiPcIHNY0GzyDCDLDDMlSKUcob5ZxiG5a5KL%2F%2Fi6SA09pPh7uIfOB1kkJ8OciYWP%2F0N8DmL5yx%2BaKmeK4nZUhLFLCiJbE4vOb2cRi9cmF7scK8LLkOPVCC%2BUdHsLYyO5hW4SPjyr8T60nEK0HFKm5hMWfmlWpmCCvVFcuocd6WDeHOO%2B2c4jsapENyRLrqEexa%2B3dGeboDOzW%2FiItiIt46CKUXnfCP9lzuuwHZupuusg5iJoBExBS%2Bq%2FDg3F8RRf190G%2F%2FRfi7MM9%2FXdGb%2FNQQJN1JcTjrgr6QDo7B00HRKuyq%2B0f8vJh0U%2Bi5%2BJKl0RLYJsdTNKaJBxYoXmMTSEZHUQ5WdXUAS7vD4NionQ9MHx4UFBAD2nALCXFRAIPRjUVIUkOg%2BOk%2FBOFZAEHuweII9Ej53f1XT2UWDyrpo%2FHLuwGHRYCA%2Bp2hcdhsUpL6zMqQjGhzCp80d7MHiSdQq%2FH1NZxeNhGdTfBtQmKFZg40cCUAhmI5o%2BK%2B0vYQUkHbQgDu7EODT5oeoEESDJU8QgsMPcjkhSHgKxnmFABR4Onq6Gv0rYaAjwmB7jM44T1wirGAnIZDzO%2F58EsJzv5om%2BOiJhoklJFbTeTeZXtHo%2Fd2eix8N%2BsC34%2B8vvjLo76OgCM%2BCgKUZB870rzi34A3Hejnta%2BhclwIZAu8A8L5WnZzAL7XLAAI%2FUfJjsMgnE6ifOlSJ%2B2zlcBFyF3lF7JSil0KBzO1u8LbSX942n7%2B%2FKmt2%2BUPnMqAIu1NcdMM%2FdZEj%2FzPDdAeZLMB0yH%2F3FKJ2F18w3cBUxMmpRJCKyF9pR1Mu8lkT%2BYOuOIjDMs%2BBXYjcLrQmnQ1Nxy4KLnGOeiiucqeMpxxX%2BZ08Xko9pzCEKavn0aBKnkXhA5B%2F0M9j5eOntieN7%2BR5cOH4TghOOQH%2BpzXsDhwpLGJpED7jMUkc%2FAWQmjwuOB7ydzxsqEL01ROQYQtRV%2FLZsZPmzoNdmGwqRzOGz1CgXUr8RcRw5Nza1M5mpKlMYZSJacxsQozGaqLwhR2bEBwz73rHq5x6fop3Ht2Xqqa3BfjBySbgfUrbG0YcVj%2FHpKCix9Qu%2Bziosj0nEAWMKOh0Ce6%2FOzrZzDCJEqqTxxdVp5GKOLdWytxypMMSLXHgtBR8oYgFhCkGRFkZigvNSqSr%2BSrX13M7pKPBQ7Fp9Dg9zTQMKwgd%2B0DBpiHbi7LK%2FwM%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
### Задание 2
[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22ftJ76jVqvtfw3Rg9ueoT%22%3E3Vhdb9owFP01kboHpjhODHmkQLuXSZV42ProJiaJlGBkTAn79bMTGzsJbQPNWFsJGfv6Xn%2Bcc3xtcOCsKO8Z3qQ%2FaUxyx3Pj0oFzx%2FNAELriS1oOtWUCYW1IWBYrJ2NYZn%2BIMqq4ZJfFZNtw5JTmPNs0jRFdr0nEGzbMGN033VY0b866wQnpGJYRzrvWX1nMU7ULb2zsP0iWpHpmgMK6p8DaWe1km%2BKY7i0TXDhwxijlda0oZySX4Glc6ri7F3qPC2NkzfsEeN0ANcaWH%2FR2RYhAVjRu92nGyXKDI9mzF%2BQKW8qLXLSAqNaRzzjfqUhn7jrhXJa3riNcJmNdF%2BVtVS5UEGGclNYK1HrvCS0IZwfhklqQIoXf3sAPtE2NAjXGSmS%2BamJFfnIc2eAjKgqi03D5feASnG5kVXjhPCc5TRguBDobwjIxI2HtvgfT8RbCq6wk%2BkCcRLx0vFm15yuhCiYDwBr0gZWltHjabS9QocBELBLhQjomXLpIuztCdkdddpoSytPR8Ozo3ET3mRpV%2Fk9M1Kp5b25eWgvos5TyhaWMwDfZM57Jj%2BfenFjye2fwvlVTwLuLZAm8ri6POlTDHI%2B30iUc4rijD3%2FcZQqdeiqRmgQ7VWnWqzPtXdVV1ydVObfysG9l46AqkfYUUV5Xh3o6UQIrts7wQEXVIwyVhSZNtkErCwXuAGyPvwbb9X0bBl%2BW%2FCPZQ5IfXuEhNLWwm2vEBV7oWpc1GgIp%2FQgnceeR3MWO7lhEGk9NG851PJWvcdGKcrzdZlETRVJm%2FLeou98D1Xq0euZyk65uHHRjLbZjBcnmo91nwqqWjqsXxzFLCG%2B89WwS3%2BQkUNgwkmOePTfxsYgKXuFBzfBAMwHmkUq%2FJXrQvt%2FqpauoFpvH1fYj2LuMYP%2BTERz8J4J7HzR4GQ%2FB5TxYLBhOhuVB7maplkYZT2lC1zhfGOsJplCXKZlPfX3vDc2aOnMjsTU4CRrnbgTOPrrAfX0EulptybsPrX9tsYAPKpbxabHYF%2B4%2FOOhGMij0YDNV91fMsJIILpMEuk4ef5NaI5qGZIyCemf68AqZ3ghA%2FLgPz80RsPXzFbUvkAGvd3SZLMYfTRbgk8ki8INzZeG3ZYGGkoVomn%2BZa3fzXz1c%2FAU%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
## 2. Реализация программы
Программа написана на языке **C++**.

```cpp
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
```
## 3. Результаты работы программы
```text
Введите три числа: 1 0.5 0.677
Число 1.00 не принадлежит отрезку (-1;1)
Число 0.50 принадлежит отрезку (-1;1)
Число 0.68 принадлежит отрезку (-1;1)
```
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
