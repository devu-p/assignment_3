// Write a program to find the multiplication values and the cubic values using inline function

#include <iostream>
using namespace std;
class Calculator 
{
public:
    inline int multiply(int x, int y) 
    {
        return x * y;
    }

    inline int cube(int x) 
    {
        return x * x * x;
    }
};

int main() 
{
    Calculator calc;
    int val1, val2;

    cout << "Enter two values: "<<endl;
    cout << "value 1 is:";
    cin >> val1 ;
    cout << "value 2 is:";
    cin >> val2 ;

    cout << "Multiplication value is: " << calc.multiply(val1, val2) << endl;
    cout << "Cubic value of val1  is: " << calc.cube(val1) << endl;
    cout << "Cubic value of val2  is: " << calc.cube(val2) << endl;

    return 0;
}
