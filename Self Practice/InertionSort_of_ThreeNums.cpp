#include <iostream>

using namespace std;

// Order 3 numbers in an ascending order
// This is an application of the insertion sort algorithm, worst O(n^2), O(n) best in case the array is sorted
int main()
{

    // Notice the approach used to sort these three numbers

    int a, b, c;
    cin >> a >> b >> c;

    int temp {0};

    // We started by making the problem smaller comparing the first 2 numbers only then putting them in the right order
    if (b < a)
    {
        temp = a;
        a = b;
        b = temp;
    }

    // Now, we are sure that the first number is less than the second one. So, we start to compare the second number with the last number
    if (c < b)
    {
        temp = b;
        b = c;
        c = temp;

        // Last final step, we check if the second number is less than the first number again, in case a switch happened.
        if (b < a)
        {
            temp = a;
            a = b;
            b = temp;
        }

    }


    // The number are sorted now
    cout << a << " " << b << " " << c << endl;

    return 0;
}
