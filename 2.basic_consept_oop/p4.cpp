// Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.

#include <iostream>
using namespace std;

class Rectangle 

{
private:
    double length, width;

public:
    void setDimensions() 
    
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    double calculateArea() 
    
    {
        return length * width;
    }

    double calculatePerimeter() 
    
    {
        return 2 * (length + width);
    }

    void displayInfo() 
    
    {
        cout << "\nRectangle Info:" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() 

{
    Rectangle rect;
    rect.setDimensions();
    rect.displayInfo();
    return 0;
}


