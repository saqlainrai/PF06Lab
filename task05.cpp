#include <iostream>
using namespace std;

float totalIncome ( string screen, int rows, int columns) ;

main()
{

    int rows, columns;
    string screen;
    float result;

    cout << "Enter Type of Screen: ";
    cin >> screen;
    cout << endl;

    cout << "Enter No. of Rows: ";
    cin >> rows;
    cout << endl;

    cout << "Enter No. of Columns: ";
    cin >> columns;
    cout << endl;

    result = totalIncome ( screen, rows, columns);

    cout << "The Total Income is: " << result << endl;
}

float totalIncome ( string screen, int rows, int columns)
{
	float income;

	if ( screen == "Premiere" )
    {
        income = (12.00 * ( rows * columns ));
    }
    else if ( screen == "Normal" )
    {
        income = (7.50 * ( rows * columns ));
    }
    else if ( screen == "Discount" )
    {
        income = (5.00 * ( rows * columns ));
    }
    else
    {
        cout << "Invalid Value"<<endl;
        income = 0.0;
    }

	return income;
}