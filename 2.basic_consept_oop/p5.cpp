//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include <iostream>
#include <string>
using namespace std;

class Person 
{
private:
    string name;
    int age;
    string country;

public:
    void setInput() 
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Country: ";
        cin >> country;
    }

    void displayInfo() 
    {
        cout << "\nPerson Info:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

int main() 
{
    Person person;
    person.setInput();
    person.displayInfo();
    return 0;
}
