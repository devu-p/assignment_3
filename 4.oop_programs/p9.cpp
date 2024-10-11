// Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>
using namespace std;

class Matrix 
{
private:
    int arr[5];

public:
    
    Matrix() 
    {
        for (int i = 0; i < 5; i++) 
        {
            arr[i] = 0;
        }
    }

    void inputMatrix() 
    {
        cout << "Enter 5 matrix elements:" << endl;
        for (int i = 0; i < 5; i++) 
        {
            cin >> arr[i];
        }
    }

    void displayMatrix() 
    {
        cout << "Matrix elements:" << endl;
        for (int i = 0; i < 5; i++) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    
    Matrix operator+( Matrix& m) 
    {
        Matrix result;
        for (int i = 0; i < 5; i++) 
        {
            result.arr[i] = arr[i] + m.arr[i];
        }
        return result;
    }
};

int main() 
{
    Matrix m1, m2, sum;

    cout << "Matrix 1:" << endl;
    m1.inputMatrix();
    cout << "Matrix 2:" << endl;
    m2.inputMatrix();

    sum = m1 + m2; 
    cout << "\nMatrix 1:" << endl;
    m1.displayMatrix();
    cout << "Matrix 2:" << endl;
    m2.displayMatrix();
    cout << "Sum of Matrices:" << endl;
    sum.displayMatrix();

    return 0;
}


