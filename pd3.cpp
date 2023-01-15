#include <iostream>
using namespace std;
main()
{
    string month;
    int days;
    int date;
 cout << " enter date:";
 cin >> date;
 cout << "enter month:";
 cin >> month;
 if((month == "march " && date >= 21) ||(month == "april"  && date<=19))
   {
   cout << "aries";
   }
   elseif((month == "april" && date >=20) ||(month == "may" && date <= 20))
   {
    cout << "taurus";
   }
    elseif((month == "may" && date >=21) || (month <= "june" && date <=20))
   {
    cout << "gemini";
   }
    elseif((month == "june" && date >= 21) || (month == "july" && date <=22))
   {
    cout << "cancer";
   }
    elseif((month == "july" && date >=23)|| (month == "august" && date <= 22))
   {
    cout << "leo";
   }
    elseif((month == "august" && date >=23) || (month == "september" && date <= 22))
   {
    cout << "virgo";
   }
    elseif((month == "september" && date >= 23) || (month == "october" && date <= 22))
   {
    cout << "libra";
   }
    elseif((month == "october" && date >= 23) || (month == "november" && date <= 21))
   {
    cout << "scorpio";
   }
    elseif((month == "november" && date >=22||(month == "december" && date <= 21))
   {
    cout << "sagittarius";
   }
    elseif((month == "december" && date >=22||(month == "january" && date <=19))
   {
    cout << "capricorn";
   }
    elseif((month == "january" && date >= 20) ||(month == "febuary" && date <=19))
   {
    cout << "aquarius";
   }
   elseif((month == "febuary" && date >=20) || (month == "march" && date <= 20))
   {
    cout << "pisces";
   }
}