// Write a C++ Program display Student Mark sheet using Multiple inheritance

#include <iostream>
#include <string>
using namespace std;

class Student 
{
public:
    string name;
    int rollNumber;

    Student(string n, int r) 
    {
        name = n;
        rollNumber = r;
    }

    void displayStudentInfo() 
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Marks 
{
public:
    int physics;
    int chemistry;
    int mathematics;

    Marks(int p, int c, int m) 
    {
        physics = p;
        chemistry = c;
        mathematics = m;
    }

    void displayMarks() 
    {
        cout << "Physics: " << physics << endl;
        cout << "Chemistry: " << chemistry << endl;
        cout << "Mathematics: " << mathematics << endl;
    }

    int calculateTotalMarks() 
    {
        return physics + chemistry + mathematics;
    }

    float calculatePercentage() 
    {
        return (calculateTotalMarks() / 300.0) * 100;
    }
};

class MarkSheet : public Student, public Marks 
{
private:
    string grade;

public:
    MarkSheet(string n, int r, int p, int c, int m) : Student(n, r), Marks(p, c, m) 
    {
        if (calculatePercentage() >= 90) 
        {
            grade = "A";
        } else if (calculatePercentage() >= 80) 
        {
            grade = "B";
        } else if (calculatePercentage() >= 70) 
        {
            grade = "C";
        } else if (calculatePercentage() >= 60) 
        {
            grade = "D";
        } else 
        {
            grade = "F";
        }
    }

    void displayMarkSheet() 
    {
        cout << "Mark Sheet:" << endl;
        displayStudentInfo();
        displayMarks();
        cout << "Total Marks: " << calculateTotalMarks() << endl;
        cout << "Percentage: " << calculatePercentage() << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() 
{
    MarkSheet markSheet("hir", 123, 90, 85, 95);
    markSheet.displayMarkSheet();
    return 0;
}
