#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    double *b = new double[n];
    double *c = new double[n];
    int c_size = 0;

    cout << "Введите элементы массива b: ";
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (b[i] > 0) {
            c[c_size++] = sqrt(b[i]) / 5;
        }
    }

    sort(c, c + c_size);

    cout << "Массив c после сортировки: ";
    for (int i = 0; i < c_size; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    delete[] b;
    delete[] c;
    return 0;
}
