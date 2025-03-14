#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr1 = (float *)malloc(sizeof(float));
    float *ptr2 = (float *)malloc(sizeof(float));
    float *ptr3 = (float *)malloc(sizeof(float));

    *ptr1 = 10.5;
    *ptr2 = 20.5;
    *ptr3 = 30.5;

    printf("Исходные значения: %.2f, %.2f\n", *ptr1, *ptr2);

    // Меняем местами значения ptr1 и ptr2
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("После обмена: %.2f, %.2f\n", *ptr1, *ptr2);

    free(ptr1);
    free(ptr2);
    free(ptr3);
    return 0;
}
