// Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.

#include <iostream>
using namespace std;

class Date 
{
private:
    int date, month, year;

public:
    Date() 
    {}

    void setInput() 
    {
        cout << "Enter date: ";
        cin >> date;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    bool isValidDate() 
    {
        if (month < 1 || month > 12) return false;
        if (date < 1 || date > 31) return false;
        if ((month == 4 || month == 6 || month == 9 || month == 11) && date > 30) return false;
        if (month == 2) 
        {
            bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
            return isLeapYear ? date <= 29 : date <= 28;
        }
        return true;
    }

    void displayDate() 
    {
        cout << "\nDate: " << date << "/" << month << "/" << year << endl;
    }
};

int main() 
{
    Date day;
    day.setInput();
    cout << (day.isValidDate() ? "The date is valid." : "The date is invalid.") << endl;
    day.displayDate();
    return 0;
}
