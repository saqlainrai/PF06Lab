#include <iostream>
using namespace std;

float payableAmount(string day, string month, int amount);

main()
{

    int amount;
    string day, month;
    float result;

    cout << "Enter Day: ";
    cin >> day;
    cout << endl;

    cout << "Enter Month: ";
    cin >> month;
    cout << endl;

    cout << "Enter Amount: ";
    cin >> amount;
    cout << endl;

    result = payableAmount(day, month, amount);

    cout << "Your Payable Amount is: " << result << endl;
}

float payableAmount(string day, string month, int amount)
{
    float payable;

    if (day == "Sunday" && ( month == "March" || month == "October" || month == "August" ))
    {
        payable = amount - (amount * 10) / 100;
    }
    else if ( day == "Monday" && ( month == "November" || month == "December" ))
    {
        payable = amount - (amount * 5) / 100;
    }
    else
    {
        payable = amount;
    }
    return payable;
}