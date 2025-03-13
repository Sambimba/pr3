#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int *a = new int[n];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    int count = 0;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            count++;
            sum += a[i];
            cout << "Отрицательный элемент на позиции: " << i << endl;
        }
    }

    if (count > 0) {
        cout << "Среднее арифметическое отрицательных элементов: " << sum / count << endl;
    } else {
        cout << "Отрицательных элементов нет." << endl;
    }

    delete[] a;
    return 0;
}
