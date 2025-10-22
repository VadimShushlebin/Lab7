#define _CRT_SECURE_NO_DEPRECATE

#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

int main()
{
    int power;
    setlocale(LC_ALL, "RUS");
    printf("Введите степень двойки: ");
    scanf("%d", &power);

    switch (power) {
    case 10:
        printf("Килобайт (K)\n");
        break;
    case 20:
        printf("Мегабайт (M)\n");
        break;
    case 30:
        printf("Гигабайт (G)\n");
        break;
    case 40:
        printf("Терабайт (T)\n");
        break;
    case 50:
        printf("Петабайт (P)\n");
        break;
    case 60:
        printf("Экзабайт (E)\n");
        break;
    default:
        printf("Неизвестная степень: %d\n", power);
        break;
    }
    return 0;
}