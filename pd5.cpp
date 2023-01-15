#include <iostream>
using namespace std;
main()
{
    string fruit;
    string weekday;
    float quantity;
    float price;
    cout << "enter fruit name:";
    cin >> fruit;
    cout << "enter weekday:";
    cin >> weekday;
    cout << "enter quantity:";
    cin >> quantity;
    if(weekday == "monday" || weekday == "tuesday" || weekday == "wednesday" || weekday == "thursday" || weekday == "friday")
{
     if(fruit == "banana")
     { 
     price = quantity * 2.50;
     }
     else if(fruit == "apple")
     {
     price = quantity * 1.20;
     }
     else if(fruit == "orange")
    {
    price = quantity * 0.85;
    }
    else if(fruit == "grapefruit")
    {
    price = quantity * 1.45;
    }
    else if(fruit == "kiwi")
    {
    price = quantity * 2.70;
    }
    else if(fruit == "pineapple")
    {
    price = quantity * 5.50;
    }
    else if(fruit == "grapes")
    {
    price = quantity *3.85;
    }
}
 else if(weekday == "saturday" || weekday== "sunday")
   {
     if(fruit == "banana")
     { 
     price = quantity * 2.70;
     }
    else if(fruit == "apple")
     {
     price = quantity * 1.25;
     }
    else if(fruit == "orange")
    {
    price = quantity * 0.90;
    }
    else if(fruit == "grapefruit")
    {
    price = quantity * 1.60;
    }
    else if(fruit == "kiwi")
    {
    price = quantity * 3.00;
    }
    else if(fruit == "pineapple")
    {
    price = quantity * 5.60;
    }
    else if(fruit == "grapes")
    {
    price = quantity *4.20;
    }
   }
 cout << price;
}


