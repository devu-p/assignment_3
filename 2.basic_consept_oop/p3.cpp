// Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.

#include <iostream>
#include <cmath> 
using namespace std;
double PI = 3.14; 
class Circle 
{
private:
    double radius; 

public:
    Circle(double rad) : radius(rad) 
    {}

    double calculateArea() 
    {
        return PI * pow(radius, 2); 
    }

    double calculateCircumference() 
    {
        return 2 * PI * radius; 
    }
};

int main() 
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle circle(radius); 
    double area = circle.calculateArea();
    cout << "Area: " << area << endl;

    double circumference = circle.calculateCircumference();
    cout << "Circumference: " << circumference << endl;

    return 0;
}
