#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введите значения a и b: ";
    cin >> a >> b;

    int *ptrA = &a, *ptrB = &b;
    *ptrA *= 2;
    *ptrB /= 2;

    cout << "Новые значения: a = " << a << ", b = " << b << endl;
    return 0;
}
