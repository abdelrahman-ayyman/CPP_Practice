#include <iostream>
using namespace std;


// A really basic program to store, print, update, and delete the data of employees depending mainly on the local storage only.

int main()
{
    const int MAX = 1000;

    string names[MAX];
    unsigned int ages[MAX];
    unsigned long long salaries[MAX];
    char genders[MAX];

    int cur = -1;

    while(1)
    {
        cout << "Enter your choice: " << endl;
        cout << "1) Add new employee" << endl;
        cout << "2) Print all employees" << endl;
        cout << "3) Delete by age" << endl;
        cout << "4) Update salary by name" << endl;
        cout << "Any other character to exit the program." << endl;

        int choice {0};
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter name: ";
            cin >> names[++cur];

            cout << "Enter age: ";
            cin >> ages[cur];

            cout << "Enter salary: ";
            cin >> salaries[cur];

            cout << "Enter gender(M/F): ";
            cin >> genders[cur];

            cout << endl;
        }
        else if (choice == 2)
        {
            cout << "*************************" << endl;
            for (int i = 0; i <= cur; i++)
            {
                cout << names[i] << " " << ages[i] << " " << salaries[i] << " " << genders[i] << endl;
            }
            cout << endl;
        }
        else if (choice == 3)
        {
            int startAge, endAge;
            cout << "Enter start and end age: " << endl;
            cin >> startAge >> endAge;

            for (int i = 0; i <= cur; i++)
            {
                if (ages[i] >= startAge && ages[i] <= endAge)
                {
                    names[i]    = names[cur];
                    ages[i]     = ages[cur];
                    salaries[i] = salaries[cur];
                    genders[i]  = genders[cur];
                    cur--;
                    i--; // to recheck in case the last record has to be deleted too
                }
            }
        }
        else if (choice == 4)
        {
            string name;
            unsigned long long salary;
            cout << "Enter the exact name and salary: " << endl;
            cin >> name >> salary;

            for (int i = 0; i <= cur; i++)
            {
                if (names[i] == name)
                {
                    salaries[i] = salary;
                    continue;
                }
            }
        }
        else
        {
            break;
        }
    }

	return 0;
}
