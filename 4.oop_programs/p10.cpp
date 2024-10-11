// Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <string>
using namespace std;

class String 
{
public:

    string str;
    String(string s) 
    {
        str = s;
    }

    String operator+( String s) 
    {
        return String(str + s.str);
    }

    void displayString() 
    {
        cout << str << endl;
    }
};

int main() 
{
    String str1("Hello");
    String str2("World");

    String result = str1 + str2; 
    cout << "String 1: ";
    str1.displayString();
    cout << "String 2: ";
    str2.displayString();
    cout << "Concatenated String: ";
    result.displayString();

    return 0;
}
