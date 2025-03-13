#include <iostream>
using namespace std;

int main() {
    float *ptr1 = new float;
    float *ptr2 = new float;
    float *ptr3 = new float;

    *ptr1 = 10.5;
    *ptr2 = 20.5;
    *ptr3 = 30.5;

    cout << "Исходные значения: " << *ptr1 << ", " << *ptr2 << endl;
    swap(*ptr1, *ptr2);
    cout << "После обмена: " << *ptr1 << ", " << *ptr2 << endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;
    return 0;
}
