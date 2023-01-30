#include <iostream>
using namespace std;

float checkCost ( int quantity, string product, string city ) ;

main()
{

    int quantity;
    string city, product;
    float result;

    cout << "Enter the Product: ";
    cin >> product;
    cout << endl;

    cout << "Enter the City: ";
    cin >> city;
    cout << endl;

    cout << "Enter the Quantity: ";
    cin >> quantity;
    cout << endl;

    result = checkCost (quantity, product, city) ;

    cout << "The Total Bill is: " << result << endl;
}

float checkCost ( int quantity, string product, string city )
{
	float amount;

    if (city == "Sofia")
    {
        if ( product == "coffee")
        {
            amount = quantity * 0.50 ;
        }
        else if ( product == "water")
        {
            amount = quantity * 0.80;
        }
        else if ( product == "beer")
        {
            amount = quantity * 1.20;
        }
        else if ( product == "sweets")
        {
            amount = quantity * 1.45;
        }
        else if ( product == "peanuts")
        {
            amount = quantity * 1.60;
        }
        else
        {
            cout<<"Invalid Value ";
            amount = 0;
        }
    }
    else if (city == "Plovdiv")
    {
        if ( product == "coffee")
        {
            amount = quantity * 0.40;
        }
        else if ( product == "water")
        {
            amount = quantity * 0.70;
        }
        else if ( product == "beer")
        {
            amount = quantity * 1.15;
        }
        else if ( product == "sweets")
        {
            amount = quantity * 1.30;
        }
        else if ( product == "peanuts")
        {
            amount = quantity * 1.50;
        }
        else
        {
            cout<<"Invalid Value ";
            amount = 0;
        }
    }
    else if (city == "Varna")
    {
        if ( product == "coffee")
        {
            amount = quantity * 0.45;
        }
        else if ( product == "water")
        {
            amount = quantity * 0.70;
        }
        else if ( product == "beer")
        {
            amount = quantity * 1.10;
        }
        else if ( product == "sweets")
        {
            amount = quantity * 1.35;
        }
        else if ( product == "peanuts")
        {
            amount = quantity * 1.55;
        }
        else
        {
            cout<<"Invalid Value ";
            amount = 0;
        }
    }
    else
    {
        cout<<"Invalid Value ";
        amount = 0;
    }

	return amount;
}