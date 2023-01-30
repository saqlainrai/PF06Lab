#include <iostream>
using namespace std;

main ()
{

    string name;
	int rollno;

	cout<<"Enter your Name: ";
	cin >> name;
	cout<<endl;

    cout<<"Enter your Roll No.: ";
	cin >> rollno;
	cout<<endl;

    if ( name == "Ali" && rollno == 501)
    {
        cout << "Welcome Ali! to UET";
    }
}