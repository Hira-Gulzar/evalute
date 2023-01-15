#include <iostream>
using namespace std;
main()
{
int budget;
string category;
int percen;
int numberofpeople;
float result;
float total;
float value;
cout << "enter budget:";
cin >> budget;
cout << "enter category:";
cin >> category;
cout << "enter number of people in group:";
cin >> numberofpeople;
if(numberofpeople >=1 && numberofpeople <=4)
 {
percen = (75*budget)/100;
total = budget- percen;
 }
if(numberofpeople >=5 && numberofpeople <=9)
 {
percen = (60*budget)/100;
total =  budget - percen;
 }
if(numberofpeople >=10 && numberofpeople <=24)
 {
percen = (50*budget)/100;
total =  budget - percen;	
 }
if(numberofpeople >=25 && numberofpeople <= 49)
 {
percen =(40 *budget)/100;
total= budget - percen;
 }
if( numberofpeople >=50)
 {
percen =(25*budget)/100;
total = budget - percen;
 }

if(category == "VIP")
 {
result = (numberofpeople * 499.99);
 }
if(category == "normal")
 {
result = (numberofpeople *249.99);
 }
if(total> result)
 {
 value=total-result;
cout << "yes you have";
cout << value; 
 }
if(total< result)
 {
value= result - total;
cout << "not enough money! you need";
cout << value;
 }
}






