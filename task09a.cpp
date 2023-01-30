#include <iostream>
using namespace std;

int isGreater ( int numb1, int numb2, int numb3 ) ;

main ()
{

	int result;
	int numb1, numb2;

	cout<<"Enter Number 1: ";
	cin >> numb1;
	cout<<endl;

    cout<<"Enter Number 1: ";
	cin >> numb2;
	cout<<endl;

    if (numb1 > numb2)
    {
        cout << "Greater Number is: " <<numb1;
    }
    else if (numb2 > numb1)
    {
        cout << "Greater Number is: " << numb2;
    }
    else
    {
        cout << "Both Numbers are equal";
    }

}