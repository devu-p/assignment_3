// Write a C++ Program to find Area of Rectangle using inheritance

#include <iostream>
using namespace std;

class Shape {
protected:
    string shapeName;

public:
    Shape(string name) {
        shapeName = name;
    }

    void displayShapeName() {
        cout << "Shape: " << shapeName << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : Shape("Rectangle") {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    void displayData() {
        displayShapeName();
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    double length, width;

    cout << "Enter rectangle length: ";
    cin >> length;
    cout << "Enter rectangle width: ";
    cin >> width;

    Rectangle rectangle(length, width);

    cout << "\nRectangle Data:" << endl;
    rectangle.displayData();

    return 0;
}


