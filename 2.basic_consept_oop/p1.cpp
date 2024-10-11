//1. WAP to create simple calculator using class

#include <iostream>
using namespace std;

class Calculator 
{
public:
    int addition(double a, double b) 
    {
        cout << "Result: " << a + b << endl;
    }

    int sub(double a, double b) 
    {
        cout << "Result: " << a - b << endl;
    }

    int multiply(double a, double b) 
    {
        cout << "Result: " << a * b << endl;
    }

    int divide(double a, double b) 
    {
            cout << "Result: " << a / b << endl;
    }
};

int main() 
{
    Calculator calc;
    char op;
    double num1, num2;

    cout << "Enter first numbers: ";
    cin >> num1;
    cout << "Enter second numbers: ";
    cin >> num2;
    cout << "Enter operator :(+, -, *, /): ";
    cin >> op;

    switch (op) 
    {
        case '+':
            calc.addition(num1, num2);
            break;
        case '-':
            calc.sub(num1, num2);
            break;
        case '*':
            calc.multiply(num1, num2);
            break;
        case '/':
            calc.divide(num1, num2);
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            break;
    }

    return 0;
}
