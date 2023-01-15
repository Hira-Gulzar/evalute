#include <iostream>
using namespace std;
bool isSame(int number1 , int number2, int number3);
main()
{
int number1;
int number2;
int number3;
bool result;
cout << "enter first number:";
cin >> number1;
cout << "enter Second number:";
cin >> number2;
cout << "enter Third number:";
cin >> number3;
result = isSame(number1, number2, number3);
if(result == true)
 {
cout << "Yes";
 }
if(result != true)
 {
cout << "False";
 }
}
bool isSame(int number1, int number2, int number3)
{
if(number1 == number2 && number2 == number1 && number2 == number3 && number3 == number2)
 {
 return true;
 }
 else
 {
 return false;
 }
}
