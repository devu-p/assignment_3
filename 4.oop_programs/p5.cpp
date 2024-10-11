// Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)

#include <iostream>
using namespace std;
class Students 
{
protected:
    int rollNumber;

public:
    void setRollNumber(int roll) 
    {
        rollNumber = roll;
    }

    void displayRollNumber() 
    {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Derived class Test from Students
class Test : public Students 
{
protected:
    int marks1;
    int marks2;

public:
    void setMarks(int m1, int m2) 
    {
        marks1 = m1;
        marks2 = m2;
    }

    void displayMarks() 
    {
        cout << "Marks 1: " << marks1 << endl;
        cout << "Marks 2: " << marks2 << endl;
    }
};

class Result : public Test 
{
public:
    void displayResult() 
    {
        int total = marks1 + marks2;
        displayRollNumber();
        displayMarks();
        cout << "Total Marks: " << total << endl;
    }
};

int main() 
{
    Result student;

    student.setRollNumber(101);
    student.setMarks(85, 90);

    // Displaying result
    cout << "Student Result:" << endl;
    student.displayResult();

    return 0;
}
