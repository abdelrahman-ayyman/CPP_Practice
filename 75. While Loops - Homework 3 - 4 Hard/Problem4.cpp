#include <iostream>
using namespace std;

/*
- Read integer T for number of test cases.
- For each test case read integer N. Then read N integers a, b, c
- Output: Compute the sum of the following expression: a, b*b, c*c*c, d*d*d*d, e*e*e*e*e……
 **That is the k-th number is repeated k times
*/
int main()
{
    // number of test cases
    int t;
    cin >> t;

    while (t--)
    {
        // The number of integers to read
        int n;
        cin >> n;

        int k {1}, num, sum {0};
        while(k <= n)
        {
            cin >> num;
            int crnt {1}, pow {1};

            // calculating the power of the integer in the k-th position
            while(crnt <= k)
            {
                pow *= num;
                crnt++;
            }

            sum += pow;
            k++;
        }

        cout << sum << endl;
    }

	return 0;
}
