#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main(void)
{
    int n;

    setlocale(LC_ALL, "Rus");
    puts("Введите число от 1 до 999:");
    scanf("%d", &n);
    if (n < 1 || n > 999)
    {
        puts("ввод некорректен");
        return 0;
    }
    switch (n % 100)
    {
    case 11:
    case 12:
    case 13:
    case 14:
        printf("%d рублей\n", n);
        break;
    default:
        switch (n % 10)
        {
        case 1:
            printf("%d рубль\n", n);
            break;
        case 2:
        case 3:
        case 4:
            printf("%d рубля\n", n);
            break;
        default:
            printf("%d рублей\n", n);
            break;
        }
        break;
    }
    return 0;
}
