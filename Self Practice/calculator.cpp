#include <iostream>

using namespace std;

// Create a simple calculator that reads two integers and performs the specified operation
int main()
{
    double num1, num2;
    char operation;
    cin >> num1 >> operation >> num2;

    if (operation == '+')
        cout << num1 + num2 << endl;
    else if (operation == '-')
        cout << num1 - num2 << endl;
    else if (operation == '*')
        cout << num1 * num2 << endl;
    else
    {
        try
        {
            if (num2 == 0)
                throw 0;
            cout << num1 / num2 << endl;
        } catch(...)
        {
            cout << "A division by zero error. Program terminated." << endl;
        }
    }

    return 0;
}
