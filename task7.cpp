#include <iostream>
using namespace std;
float lowestPrice(int kilometers , string time);
main()
{
int kilometers;
string time;
string type;
float cheapest;
cout << "enter kilometers:";
cin >> kilometers;
cout << "enter time:";
cin >> time;
cheapest = lowestPrice(kilometers, type);
cout << cheapest;
}
float lowestPrice(int kilometers, string type)
{
int price;
float ans;
string time;
if(type == "taxi")
{
 if(time == "day")
 {
ans = (kilometers + 0.79);
price = (ans*0.70);
 }
 if(time == "night")
 {
ans = (kilometers + 0.90);
price = (ans*0.70);
 }
return price;
}
 if(type == "bus" && kilometers >=20)
 {
 price =(kilometers + 0.09);
 return price;
 }
 if(type == "train" && kilometers >= 100)
 {
 price = (kilometers + 0.06);
 return price;
 }
}