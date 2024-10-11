// Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information. Accept address from each student implement using of aggregation

#include <iostream>
#include <string>

using namespace std;

class Address 
{
public:
    
    string city;
    string state;
   
    void inputAddress() 
    {
        
        cout << "Enter city: ";
        cin >> city;
        cout << "Enter state: ";
        cin >> state;
        
    }

    void displayAddress() 
    {
        cout << "Address: " << city << ", " << state <<  endl;
    }
};

class Student 
{
private:
    string name;
    string className;
    int rollNumber;
    float marks;
    Address address; 
public:
 void inputStudentInfo() 
 {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter class: ";
        cin >> className;
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;

        cout << "Enter address:" << endl;
        address.inputAddress();
    }

    void displayStudentInfo() 
    {
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        address.displayAddress();

        if (marks >= 90) 
        {
            cout << "Grade: A" << endl;
        } 
        else if (marks >= 80) 
        {
            cout << "Grade: B" << endl;
        } 
        else if (marks >= 70) 
        {
            cout << "Grade: C" << endl;
        } 
        else if (marks >= 60) 
        {
            cout << "Grade: D" << endl;
        } 
        else 
        {
            cout << "Grade: F" << endl;
        }
    }
};
int main() 
{
    Student student;
    student.inputStudentInfo();
    cout << endl;
    student.displayStudentInfo();
    cout << endl;
    return 0;
}
