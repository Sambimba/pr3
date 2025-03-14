#include <stdio.h>

int main() {
    int a, b;
    printf("Введите значения a и b: ");
    scanf("%d %d", &a, &b);

    int *ptrA = &a, *ptrB = &b;
    *ptrA *= 2;  // Увеличиваем a в 2 раза
    *ptrB /= 2;  // Уменьшаем b в 2 раза

    printf("Новые значения: a = %d, b = %d\n", a, b);
    return 0;
}
