// Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)

#include <iostream>
#include <string>
using namespace std;

class Person 
{
    string name;
    int age;

public:
    Person(string n, int a) 
    {
        name = n;
        age = a;
    }
    void inputPersonData() 
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person 
{
private:
    float percentage;

public:
    Student(string n, int a, float p) : Person(n, a) 
    {
        percentage = p;
    }

    void inputStudentData() 
    {
        inputPersonData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayStudentData() 
    {
        displayPersonData();
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person 
{
private:
    float salary;

public:
    Teacher(string n, int a, float s) : Person(n, a) 
    {
        salary = s;
    }

    void inputTeacherData() 
    {
        inputPersonData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacherData() 
    {
        displayPersonData();
        cout << "Salary: " << salary << endl;
    }
};

int main() 
{
    Student student("devu", 20, 90.0);
    cout << "Student Data:" << endl;
    student.displayStudentData();

    cout << "\nEnter new student data:" << endl;
    student.inputStudentData();
    cout << "\nUpdated Student Data:" << endl;
    student.displayStudentData();

    Teacher teacher("hir", 30, 50000.0);
    cout << "\n\nTeacher Data:" << endl;
    teacher.displayTeacherData();

    cout << "\nEnter new teacher data:" << endl;
    teacher.inputTeacherData();
    cout << "\nUpdated Teacher Data:" << endl;
    teacher.displayTeacherData();

    return 0;
}


