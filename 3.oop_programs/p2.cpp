//Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include <iostream>

using namespace std;
class Calculator 
{

public:

    double num1, num2;
    
    double add(double num1 , double num2) 
    {
        return num1 + num2;
    }

    double subtract(double num1 , double num2) 
    {
        return num1 - num2;
    }

    double multiply(double num1 , double num2) 
    {
        return num1 * num2;
    }

    double divide(double num1 , double num2) 
    {
        return num1 / num2;
    }
};

int main() 
{
    Calculator calc;
    double num1,num2;
    cout <<"Enter num1:"  << endl;
    cin >> num1;
    cout <<"Enter num2:" << endl;
    cin >> num2;

    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;

    return 0;
}

