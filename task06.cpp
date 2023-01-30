#include <iostream>
using namespace std;

float lowestPrice ( int km, string time) ;

main()
{

    int km;
    string time;
    float result;

    cout << "Enter No of Kilometers: ";
    cin >> km;
    cout << endl;

    cout << "Enter the time: ";
    cin >> time;
    cout << endl;

    result = lowestPrice ( km, time ) ;

    cout << "The Total Fare Price will be: " << result << endl;
}

float lowestPrice ( int km, string time)
{
	float price;

    if ( km > 100)
    {
        price = ( km * 0.06 );
    }

	else if ( km >= 20 && km < 100)
    {
        price = ( km * 0.09 );
    }

    else if ( km < 20 && km >=0)
    {
        if ( time == "day" )
        {
            price = ( 0.70 + (km * 0.79));
        }

        else
        {
            price = ( 0.70 + (km * 0.90));
        }
    }

    else
    {
        cout << "Invalid Value"<<endl;
        price = 0.0;
    }

	return price;
}