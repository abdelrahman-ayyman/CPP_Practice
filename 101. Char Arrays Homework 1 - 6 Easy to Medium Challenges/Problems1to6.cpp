#include <iostream>
using namespace std;

// Read 2 strings input and str. Print YES if the given str is a prefix for the string. Otherwise, print NO
void solve1()
{
    string input, str;

    cin >> input >> str;
    for (int i = 0, n = str.size();i < n; i++)
    {
        if (input[i] != str[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

//Read 2 strings input and str. Print YES if the given str is a suffix for the string. Otherwise, print NO
void solve2()
{
    string input, str;

    cin >> input >> str;
    int j = 0;
    for (int i = input.size() - str.size();i < input.size(); i++)
    {
        if (input[i] != str[j])
        {
            cout << "NO" << endl;
            return;
        }
        j++;
    }
    cout << "YES" << endl;
}

//Read 2 strings input and str. Print YES if the given str is a substring for the string. Otherwise, print NO
void solve3()
{
    string input, str;

    cin >> input >> str;
    int cur = 0;
    for (int i = 0;i < input.size(); i++)
    {
        if (input[i] == str[cur])
        {
            cur++;
            if (cur == str.size())
            {
                cout << "YES" << endl;
                return;
            }
        }
        else
        {
            cur = 0;
        }
    }
    cout << "NO" << endl;
}

//Read 2 strings input and str. Print YES if the given str is a subsequence for the string. Otherwise, print NO
void solve4()
{
    string input, str;

    cin >> input >> str;
    int cur = 0;
    for (int i = 0;i < input.size(); i++)
    {
        if (input[i] == str[cur])
        {
            cur++;
            if (cur == str.size())
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}


//Read a string of 6 letters maximum, convert it to int then print
// the number, the number multiplied by 3
void solve5()
{
    string input;

    cin >> input;
    int x = 0;
    for (int i = 0;i < input.size(); i++)
    {
        x *= 10;
        x += (input[i] - '0');
    }
    cout << x << " " << x*3 << endl;
}

// ● Read a string, then divide it to consecutive groups of same letter. Print each group
// ● Input ⇒ outputs.
//  ○ “111222aabbb” ⇒ 111 222 aa bbb
//  ○ HHHH ⇒ HHHH
void solve6()
{
    string input;

    cin >> input;
    for (int i = 0;i < input.size(); i++)
    {
        cout << input[i];
        if (input[i] != input[i + 1])
            cout << " ";
    }
}


int main()
{
    int t = 0;
    cin >> t;
    while (t--)
        solve6();
	return 0;
}
