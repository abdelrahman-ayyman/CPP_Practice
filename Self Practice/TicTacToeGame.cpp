#include <iostream>
using namespace std;


// tic-tac-toe game

int main()
{
    int arr[9][9] = {0};

    //right, left, up, down, bottom left, bottom right, up left, up right
    int dirX[] = {0, 0, -1, 1,  1, 1, -1, -1};
    int dirY[] = {1, -1, 0, 0, -1, 1, -1,  1};

    int n;
    cin >> n;

    int start = 0;
    bool flag = true;

    while(flag)
    {
        int r, c;
        char symbol = ' ';

        if (start % 2 == 0)
            symbol = 'X';
        else
            symbol = 'O';

        cout << "Player " << symbol << " turn.";

        cout << " Enter empty location (r, c):" << endl;
        cin >> r >> c; // 1 -> n

        if ( r > n || c > n || r < 0 || c < 0 || arr[--r][--c] != 0)
        {
            cout << "Invalid input. Try again." << endl;
        }
        else
        {
            if (start % 2 == 0)
                arr[r][c] = 1;
            else
                arr[r][c] = -1;

            // checking a winner.
            for (int k = 0; k < 8; k++)
            {
                int ni = r;
                int nj = c;

                int x = 1;
                bool out = false;

                while (x < n && !out)
                {
                    ni = ni + dirX[k];
                    nj = nj + dirY[k];

                    if (ni >= n || ni < 0 || nj < 0 || nj >= n)
                    {
                        out = true;
                        continue;
                    }

                    if (arr[r][c] == arr[ni][nj])
                        x++;
                    else
                    {
                        out = true;
                    }
                }

                if (x == n)
                {
                    flag = false;
                    cout << symbol << " is the winner." << endl;
                }
            }

            // Printing the new grid.
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (arr[i][j] == 0)
                        cout << ".";
                    else if (arr[i][j] == 1)
                        cout << "X";
                    else
                        cout << "O";
                }
                cout << endl;
            }

            start++;

            if (start == n*n)
                flag = false, cout << "tie." << endl;
        }

    }

	return 0;
}
