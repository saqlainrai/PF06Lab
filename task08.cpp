#include <iostream>
using namespace std;

float checkBudget(float budget, string category, int people);

main()
{

    int people;
    string category;
    float result, budget;

    cout << "Enter the Budget: ";
    cin >> budget;
    cout << endl;

    cout << "Enter the Category: ";
    cin >> category;
    cout << endl;

    cout << "Enter the Number of People in Group: ";
    cin >> people;
    cout << endl;

    result = checkBudget(budget, category, people);

    if (result >= 0)
    {
        cout << "Yes! You have " << result << "QR left" << endl;
    }
    else
    {
        result = result * -1;
        cout << "Not enough Money! You need " << result << "QR more" << endl;
    }
}

float checkBudget(float budget, string category, int people)
{
    float amount, remamount;

    if (category == "Normal")
    {
        if (people >= 1 && people <= 4)
        {
            remamount = budget - (75 * budget) / 100;
        }
        else if (people >= 5 && people <= 9)
        {
            remamount = budget - (60 * budget) / 100;
        }
        else if (people >= 10 && people <= 24)
        {
            remamount = budget - (50 * budget) / 100;
        }
        else if (people >= 25 && people <= 49)
        {
            remamount = budget - (40 * budget) / 100;
        }
        else if (people >= 50 && people <= 200)
        {
            remamount = budget - (25 * budget) / 100;
        }
        else
        {
            cout << "Invalid Value ";
            remamount = 0;
            people = 0;
        }
        amount = remamount - (people * 249.99);
    }
    else if (category == "VIP")
    {
        if (people >= 1 && people <= 4)
        {
            remamount = budget - (75 * budget) / 100;
        }
        else if (people >= 5 && people <= 9)
        {
            remamount = budget - (60 * budget) / 100;
        }
        else if (people >= 10 && people <= 24)
        {
            remamount = budget - (50 * budget) / 100;
        }
        else if (people >= 25 && people <= 49)
        {
            remamount = budget - (40 * budget) / 100;
        }
        else if (people >= 50 && people <= 200)
        {
            remamount = budget - (25 * budget) / 100;
        }
        else
        {
            cout << "Invalid Value ";
            remamount = 0;
            people = 0;
        }
        amount = remamount - (people * 499.99);
    }

    return amount;
}