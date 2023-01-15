#include <iostream>
using namespace std;
string fun(string temperature , string humidity);
main()
{
    string result;
    string temperature;
    string humidity;
    cout << "enter temperature:";
    cin >> temperature;
    cout << "enter humidity:";
    cin >> humidity;
    result = fun(temperature , humidity);
    cout << result;

}
string fun(string temperature ,string humidity)
{
    string info;
    if(temperature == "warm" && humidity == "dry")
    {
     info = "play tennis";   
    } 
    if(temperature == "warm" && humidity == "humid")
    {
     info ="swim";   
    }
     if(temperature == "cold" && humidity == "dry")
    {
     info = "play basketball";
    }   
    if(temperature == "cold" && humidity == "humid")
    {
     info = "watch tv";   
    } 
    return info;
    }