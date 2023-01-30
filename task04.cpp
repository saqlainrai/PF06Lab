#include <iostream>
using namespace std;

string information ( float speed );

main()
{

    float speed;
    string result;

    cout << "Enter Speed: ";
    cin >> speed;
    cout << endl;

    result = information ( speed );

    cout << result << endl;
}
string information ( float speed )
{
	string inform;

	if ( speed >= 0 && speed <= 10 )
	{
		inform = "slow";
	}
	else if ( speed > 10 && speed < 50 )
	{
		inform = "average";
	}
	else if ( speed > 50 && speed <= 150 )
	{
		inform = "fast";
	}
    else if ( speed > 150 && speed <=1000 )
	{
		inform = "ultra-fast";
	}
    else if ( speed > 1000 )
	{
		inform = "extremly fast";
	}
    else
    {
        cout << "Invalid Value ";
        inform = 'X';
    }
	return inform;
}