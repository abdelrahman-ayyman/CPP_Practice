#include <iostream>

using namespace std;

// Print the age of someone given the number of days
int main()
{
    int num;
    cin >> num;

    int years, months, days;

    years = num / 360;
    num = num % 360;

    months = num / 30;
    num %= 30;

    days = num;

    cout << years << " " << months << " " << days << endl;

    return 0;
}
