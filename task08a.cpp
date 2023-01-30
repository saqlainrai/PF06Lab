#include <iostream>
using namespace std;

int isGreater ( int numb1, int numb2, int numb3 ) ;

main ()
{

	int result;
	int numb;

	cout<<"Enter Number 1: ";
	cin >> numb;
	cout<<endl;

    if (numb % 2 == 0)
    {
        cout << "It is an Even Number";
    }
    else
    {
        cout << "It is an Odd Number";
    }

}