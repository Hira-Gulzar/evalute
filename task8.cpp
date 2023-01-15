#include <iostream>
using namespace std;
float checkCost(string city, string product, float quantity);
main()
{
string city;
string product;
float quantity;
float price;
cout << " enter city:";
cin >> city;
cout << "enter product:";
cin >> product;
cout << "enter quantity:";
cin >> quantity;
price = checkCost(city , product , quantity);
cout << price;
}
float checkCost(string city, string product, float quantity)
{
float payable;
if(city == "sofia")
{ 
  if(product == "coffee")
  {
payable = (quantity * 0.50);
  }
  if(product == "water")
  {
payable = (quantity * 0.80);
  }
   if(product == "beer")
  {
payable = (quantity * 1.20);
  }
   if(product == "sweets")
  {
 payable = (quantity * 1.45);
  }
   if(product == "peanuts")
  {
payable = (quantity * 1.80);
  }
return payable;
}
if(city == "plovdiv")
  {
   if(product == "coffee")
  {
   payable = (quantity * 0.40);
  }
  if(product == "water")
  {
  payable = (quantity *0.70);
  }
  if(product == "beer")
  {
  payable = (quantity * 1.15);
  }
  if(product == "sweets")
  {
  payable = (quantity * 1.30);
  }
if(product == "peanuts")
  {
  payable = (quantity * 1.50);
  }
return payable;
}
if(city == "varna")
 {
  if(product == "coffee")
  {
  payable = (quantity * 0.45);
  }
  if(product == "water")
  {
  payable = (quantity * 0.70);
  }
  if(product == "beer")
  {
  payable = (quantity * 1.10);
  }
  if(product == "sweets")
  {
  payable = (quantity * 1.35); 
  }
  if(product == "peanuts")
  {
  payable = (quantity *1.55);
  }
return payable;
}
return 0;
}
