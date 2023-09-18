#include <iostream>
using namespace std;

// Read an integer, reverse it, then multiply its reverse by three
int main()
{
    int num;
    cin >> num;

    int R {0};
    int digit;

    // the loop ends once the number reaches to zero, no more digits
    while(num)
    {
        // get the last digit of this number
        digit = num % 10;

        // multiply the reverse by ten to add a space for the digit
        R *= 10;

        // add the digit to the reversed number
        R += digit;

        // remove the last digit and move to the next digit
        num /= 10;
    }

    cout << R << " " << R*3 << " ";

	return 0;
}
