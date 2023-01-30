#include <iostream>
using namespace std;

string checkTitle ( float age, char gender);

main()
{

    char gender;
    float age;
    string result;

    cout << "Enter Age: ";
    cin >> age;
    cout << endl;

    cout << "Enter Gender: ";
    cin >> gender;
    cout << endl;

    result = checkTitle ( age, gender);

    cout << "Hello " << result << endl;
}

string checkTitle ( float age, char gender)
{
    string gen;

    if ( gender == 'M')
    {
        if ( age >= 16 )
        {
            gen = "Mr.";
        }
        else
        {
            gen = "Master";
        }
    }
    else if ( gender == 'F' )
    {
        if ( age >= 16 )
        {
            gen = "Ms.";
        }
        else
        {
            gen = "Miss";
        }
    }
    else
    {
        gen = "Undefined";
    }
    return gen;
}