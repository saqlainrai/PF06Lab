#include <iostream>
using namespace std;

float checkPlayed(string type, int holidays, int weekends);

main()
{

    system("cls");

    int holidays, weekends;
    string type;
    int result;

    cout << "Enter the type of year: ";
    cin >> type;
    cout << endl;

    cout << "Enter the No. of holidays in year: ";
    cin >> holidays;
    cout << endl;

    cout << "Enter the weekends you travel to home: ";
    cin >> weekends;
    cout << endl;

    result = checkPlayed(type, holidays, weekends);

    cout << result ;
}

float checkPlayed(string type, int holidays, int weekends)
{
    float total, remweekends;
    float weekEndPlay, weekDayPlay, totalPlay;

    remweekends = 48 - weekends;
    weekEndPlay = ((3 * remweekends) / 4) + weekends;

    weekDayPlay = (2 * holidays) / 3;

    totalPlay = weekEndPlay + weekDayPlay ;

    if (type == "leap")
    {
        total = totalPlay + (15 * totalPlay) / 100 ;
    }
    else if ( type == "normal")
    {
        total = totalPlay;
    }
    else
    {
        cout<<"Invalid Type of Year Given."<<endl;
        cout<<"StandBy Value ";
        total = 0 ;
    }

    return total;
}