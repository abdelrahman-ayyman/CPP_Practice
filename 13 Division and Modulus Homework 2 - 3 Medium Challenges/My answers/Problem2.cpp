#include <iostream>

using namespace std;

// Get the summation of the last three digits of an integer
int main()
{
    int num;
    cin >> num;

    int first_digit = num % 10,
        second_digit = num / 10 % 10,
        third_digit = num / 100 % 10;

    cout << first_digit + second_digit + third_digit;

    return 0;
}
