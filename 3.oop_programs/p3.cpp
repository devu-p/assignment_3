//Write a C++ program to create a class called Car that has private member variables for company, model, and year. Implement member functions to get and set these variables.

#include <iostream>
#include <string>
using namespace std;

class Car 
{
private:
    string company;
    string model;
    int year;

public:
    void setInput() 
    {
        cout << "Enter Company: ";
        cin >> company;
        cout << "Enter Model: ";
        cin >> model;
        cout << "Enter Year: ";
        cin >> year;
    }

    void displayInfo() 
    {
        cout << "\nCar Info:" << endl;
        cout << "Company: " << company << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() 
{
    Car car;
    car.setInput();
    car.displayInfo();
    return 0;
}
