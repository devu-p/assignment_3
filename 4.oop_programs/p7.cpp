// Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

#include <iostream>
using namespace std;

class Calculator 
{
public:
    // Function to add two integers
    int operate(int a, int b) 
    {
        return a + b;
    }

    // Function to subtract two integers
    int operate(int a, int b, char op) 
    {
        
         return a - b;
 
    }

    // Function to multiply two integers
    int operate(int a, int b, int c) 
    {
        return a * b;
    }

    
    // Function to divide two integers
    double operate(int a, int b, double d) 
    {
        if (b != 0) 
        {
            return static_cast<double>(a) / b;
        } else 
        {
            cout << "Error: Division by zero" << endl;
            return 0.0;
        }
    }

};

int main() 
{
    Calculator calc;

    // Addition
    cout << "Addition of integers: " << calc.operate(10, 5) << endl;
    
    // Subtraction
    cout << "Subtraction of integers: " << calc.operate(10, 5, '-') << endl;
    
    // Multiplication
    cout << "Multiplication of integers: " << calc.operate(10, 5, 1) << endl;
    
    // Division
    cout << "Division of integers: " << calc.operate(10, 5, 1.0) << endl;
    
    return 0;
}
