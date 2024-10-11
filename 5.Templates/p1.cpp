// Write a program of to swap the two values using template

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() 
{
    int val1 = 10, val2 = 20;

    cout << "Before swapping:" << endl;
    cout << "Value 1: " << val1 << endl;
    cout << "Value 2: " << val2 << endl;

    swapValues(val1, val2);

    cout << "\nAfter swapping:" << endl;
    cout << "Value 1: " << val1 << endl;
    cout << "Value 2: " << val2 << endl;

    return 0;
}
