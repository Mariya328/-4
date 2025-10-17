#include <stdio.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    printf("Hello world!\n"); // 1.1.0

    printf("Гараев\n"); // 1.1.1
    printf("Максим\n");
    printf("Русланович\n");
    printf("\n");
    printf("Группа: ИСЭбд-11\n");
    printf("Дата: 02.09.2025\n");
    printf("Предмет: Основы программирования\n");
    printf("Лаб №1\n");
    printf("\n");

    printf("Лаб №1\n"); //1.1.2
    printf("Предмет: Основы программирования\n");
    printf("Дата: 02.09.2025\n");
    printf("Группа: ИСЭбд-11\n");
    printf("\n");
    printf("Русланович\n");
    printf("Максим\n");
    printf("Гараев\n");

    printf("  /\\\n"); //1.1.4
    printf(" /  \\\n");
    printf("/____\\\n");
    printf("|    |\n");
    printf("|____|\n");
    printf(" |  |\n");

    return 0;
}