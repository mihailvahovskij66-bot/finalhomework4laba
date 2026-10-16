#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int A, B, C;
    int result;
    printf("Введите номера A, B и C: ");
    scanf("%d %d %d", &A, &B, &C);
    result = (A + B + C);
    if (result % 3 == 0) {
        printf("1");
    }
    else {
        printf("0");
    }
    return 0;
}
