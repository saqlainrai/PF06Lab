#include <iostream>
using namespace std;

char isGrade ( int marks ) ;

main ()
{

	int marks;
    char result;

	cout<<"Enter your Marks: ";
	cin >> marks;
	cout<<endl;

	result = isGrade ( marks );

	cout << "Your Grade is: " << result<<endl;

}

char isGrade ( int marks )
{
	char greatest;

	if ( marks > 85 && marks <=100)
	{
		greatest = 'A';
	}
	else if ( marks >= 81 && marks <= 85 )
	{
		greatest = 'B';
	}
	else if ( marks >= 71 && marks <= 80 )
	{
		greatest = 'C';
	}
    else if ( marks >= 61 && marks <= 70 )
	{
		greatest = 'D';
	}
    else if ( marks >= 50 && marks <= 60 )
	{
		greatest = 'E';
	}
    else if ( marks < 50 && marks >= 0)
	{
		greatest = 'F';
	}
    else
    {
        cout << "Invalid Value";
        greatest = 'X';
        cout <<endl;
    }
	return greatest;
}