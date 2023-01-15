#include <iostream>
using namespace std;
main()
{
    int hourstarting;
    int minutestarting;
    int reachedhour;
    int reachedminute;
    int timeforpaper;
    int timeforreach;
    cout << "enter starting time(hour):";
    cin >> hourstarting;
    cout << "enter starting time(minute):";
    cin >> minutestarting;
    cout << "enter time for reach(hour):";
    cin >> reachedhour;
    cout << "enter time for reach(minute):";
    cin >> reachedminute;
    timeforpaper = (hourstarting *60)+minutestarting;
    timeforreach = (reachedhour * 60) + reachedminute;
    if(timeforpaper == timeforreach)
    {
        cout << "reach on time";
    }
    if(timeforpaper < timeforreach)
    {
        int original;
        original = timeforreach - timeforpaper;
        if(original <= 30)
        {
            cout << "on the time" << endl;
            cout << original <<" minutes before the start" << endl;
        }
        else if(original > 59)
        {
            int number1;
            int number2;
            number1 = original % 60;
            number2 = original / 60;
            cout << " late" << endl;
            cout << original << "minutes before the start" << endl;
        }
        else
        {
            cout << "late" << endl;
            cout << original << "minutes after start";
            }
        }
        if(timeforpaper > timeforreach)
        {
            int original;
            original = timeforpaper - timeforreach;
            if(original <= 30)
            {
            cout << "on the time" << endl;
            cout << original <<" minutes before the start" << endl;
            }
            else if(original > 59)
            {
            int number1;
            int number2;
            number1 = original % 60;
            number2 = original / 60;
            cout << "early" << endl;
            cout << number2 << ":"<< number1 << "minutes before the start" << endl;
        }
        else
        {
            cout << "early" << endl;
            cout << original << "minutes after start";
            }
        }
            }
        
