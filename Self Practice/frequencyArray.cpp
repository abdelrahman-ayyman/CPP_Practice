#include <iostream>
using namespace std;

// Given an integer n, read n integers (can be reapeted) and print the unique numbers preserving their order
int main()
{
    // n <= 900 & 0 <= x <= 500
    int n, x, arr[501] = {0};

    cin >> n;

    while(n--)
    {
        cin >> x;
        if (arr[x] == 0)
            cout << x << " ";

        arr[x]++;
    }
	return 0;
}
