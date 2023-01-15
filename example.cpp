#include <iostream>
using namespace std;
int isGreater(int number1, int number2, int number3);
main()
{
  int number1;
  int number2;
  int number3;
  int result;
  
  cout << " enter number1:";
  cin >> number1;
  cout << "enter number2:";
  cin >> number2;
  cout << " enter number3:";
  cin >> number3;
  result = isGreater( number1 , number2, number3);
  cout << result;

}
int isGreater(int number1 , int number2, int number3)
{
    int total;
  if(number1 > number2 && number1 > number3)
  {
   total = number1;
  }
 else if (number2 > number1 && number2 > number1)
  {
    total = number2;
  }
  else if(number3 > number1 && number3 > number1)
 {
   total =x number3;
  }
  return total;
}