#include <iostream>
using namespace std;

int isGreater(int numb1, int numb2, int numb3);

main()
{

    int result;
    int numb1, numb2, numb3;

    cout << "Enter Number 1: ";
    cin >> numb1;
    cout << endl;

    cout << "Enter Number 2: ";
    cin >> numb2;
    cout << endl;

    cout << "Enter Number 3: ";
    cin >> numb3;
    cout << endl;

    result = isGreater(numb1, numb2, numb3);

    cout << "The Greatest Number is: " << result;
}

int isGreater(int numb1, int numb2, int numb3)
{
    int greatest;

    if (numb1 > numb2)
    {
        if (numb1 > numb3)
        {
            greatest = numb1;
        }
        else
        {
            greatest = numb3;
        }
    }
    if (numb1 < numb2)
    {
        if (numb2 > numb3)
        {
            greatest = numb2;
        }
        else
        {
            greatest = numb3;
        }
    }
    return greatest;
}