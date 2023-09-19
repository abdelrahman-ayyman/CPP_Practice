#include <iostream>
using namespace std;

// Given an integer n, read n integers (can be reapeted) and print the unique numbers preserving their order
int main()
{
    // n <= 900 & 0 <= x <= 500
    int n, x1, x2, arr[501] = {0};

    cin >> n >> x1;
    cout << x1;
    arr[x1]++;

    n--;
    while(n--)
    {
        cin >> x2;
        if (x2 != x1 && arr[x2] == 0)
            cout << " " << x2;

        arr[x2]++;
    }
	return 0;
}
