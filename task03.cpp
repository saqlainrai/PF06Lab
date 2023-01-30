#include <iostream>
using namespace std;

string checkTitle ( float age, char gender);

main()
{

    int numb1, numb2, numb3;

    cout << "Enter First Number: ";
    cin >> numb1;
    cout << endl;

    cout << "Enter Second Number: ";
    cin >> numb2;
    cout << endl;

    cout << "Enter Third Number: ";
    cin >> numb3;
    cout << endl;

    if (numb1==numb2 && numb2==numb3)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}