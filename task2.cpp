#include <iostream>
using namespace std;
float payable(string day, string month, float amount);
main()
{
    string day;
    string month;
    float amount;
    float total;
    cout << " enter amount:";
    cin >> amount;
    cout << " enter month:";
    cin >> month;
    cout << "enter day:";
    total = payable(day, month, amount);
    cout << total;

}
float payable(string day, string month, float amount)
{
    float result;
    if(day == "sunday" && (month== "october" || month== "march" || month == "april"))
    {
        result = amount -(amount *10.0)/100;
        return result;

    }
    else if(day == "monday" &&(month == "november" || month == "december"))
    {
        result = amount - (amount *5.0)/100;
        return result;
    }
    else
    {
        return result;
    }
    return 0;
   }
