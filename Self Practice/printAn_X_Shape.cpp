#include <iostream>
using namespace std;

// Given an odd number, print an X shape
int main()
{
    int n;
    cin >> n;

    // The number of row till the middle of the X shape is n/2 +1
    for (int i = 0; i < n/2 + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Print an asterisc at the beginning and the end of each new i iteration
            if (j == i || j == n-i-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout << endl;
    }

    for (int i = 0; i < n/2 + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Print an asterisc in the middle of each row
            if (j == n/2-i-1 || j == n/2+i+1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout << endl;
    }

	return 0;
}
