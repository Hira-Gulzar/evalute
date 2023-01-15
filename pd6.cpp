#include <iostream>
using namespace std;
float telephone(string service , int minute , string time);
main()
{
    int minute;
    string service;
    string time;
    float total;
    cout << "enter minutes:";
    cin >> minute;
    cout << "enter the service:";
    cin >> service;
    cout << "enter the time:";
    cin >> time;
    total = telephone(service, minute , time); 
    cout << total;
}
float telephone(string service , int minute , string time)
{
    int remainminutes;
    float original;
    float payment;
    if(service == "regular" && minute > 50)
    {
        remainminutes = minute - 50;
        payment = (remainminutes * 0.20)+10.00;
        original = payment;
    }
    if(service == "premier" && minute > 75 && time == "day")
    {
        remainminutes = minute - 75;
        payment = (remainminutes * 0.10) + 25.00;
        original = payment;
    }
   if(service == "premier" && minute > 100 && time == "night")
    {
        remainminutes = minute - 100;
        payment = (remainminutes * 0.05) + 25.00;
        original = payment;
    }
    return original;
}

