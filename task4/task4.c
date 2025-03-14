#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    printf("Введите размер массива: ");
    scanf("%d", &n);

    double *b = (double *)malloc(n * sizeof(double));
    double *c = (double *)malloc(n * sizeof(double));
    int c_size = 0;

    printf("Введите элементы массива b: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &b[i]);
        if (b[i] > 0) {
            c[c_size++] = sqrt(b[i]) / 5;
        }
    }

    // Сортировка массива c методом выбора
    for (int i = 0; i < c_size - 1; i++) {
        for (int j = i + 1; j < c_size; j++) {
            if (c[i] > c[j]) {
                double temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("Массив c после сортировки: ");
    for (int i = 0; i < c_size; i++) {
        printf("%.2f ", c[i]);
    }
    printf("\n");

    free(b);
    free(c);
    return 0;
}
