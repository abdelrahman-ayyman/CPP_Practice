#include <iostream>
using namespace std;

// Find the biggest sum of a sub-array by a sliding window of a length k
int main()
{
    int k, n, arr[200];

    cin >> k >> n >> arr[0];
    int maximum_sum = -100000000, index = 0, sum = arr[0];
    for (int i = 1;i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];

        if (i >= k)
        {
            // Once the window length is exceeded, slide the window one cell to the right by subtracting the first cell on the left
            sum = sum - arr[i - k];
            if (sum > maximum_sum)
                maximum_sum = sum, index = i - k + 1;
        }
        else
        {
            // keep summing till the window length is reached
            maximum_sum = sum;
        }

    }

    // printing the indices of the elements forming the biggest sum of a sub-array of length k
    while (k--)
        cout << index++ << " ";

	return 0;
}
