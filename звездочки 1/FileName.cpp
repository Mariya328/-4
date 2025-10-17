#include <stdio.h>
#include <windows.h>

void main()
{
    int v1, v2, v3, v4, v5;
    int max;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("¬ведите 5 чисел: ");
    scanf_s("%d%d%d%d%d", &v1, &v2, &v3, &v4, &v5);

    max = v1;
    

    if (v3 > max) {
        max = v3;
    }

    if (v4 > max) {
        max = v4;
    }

    if (v5 > max) {
        max = v5;
    }

    printf("самое большее из введенных чисел %d", max);
}