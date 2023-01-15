#include <iostream>
using namespace std;
string checkSpeed( float speed);
main()
{
float speed;
string total;
cout << "enter speed:";
cin >> speed;
total = checkSpeed(speed);
cout << total;
}
string checkSpeed(float speed)
{
string information;
if(speed <= 10)
{
 information = "slow";
}
if(speed > 10 && speed <= 50)
 {
information = " average";
 }
if(speed > 50 && speed <=150)
 {
information = "fast";
 }
if(speed > 150 && speed <=1000)
 {
information = "ultra-fast";
 }
if(speed > 1000)
 {
information = "extremely fast";
 }
return information;
}
