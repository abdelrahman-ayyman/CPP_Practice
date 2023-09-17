#include <iostream>

using namespace std;

// Print the 4th digit from the right side of integer
int main()
{
    int num;
    cin >> num;

    cout << num / 1000 % 10;

    return 0;
}
