#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    bool is_even1 = num % 2 == 0;
    cout << is_even1 << endl;

    bool is_even2 = 2*(num / 2) == num;
    cout << is_even2 << endl;

    int last_digit = num % 10;
    bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;
    cout << is_even3 << endl;

    return 0;
}
