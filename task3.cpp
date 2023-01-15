#include <iostream>
using namespace std;
string checkFun(int age , char gender);
int age;
char gender;
 main()
 {
    string result;
    cout << "enter age:";
    cin >> age;
    cout << " enter gender:";
    cin >> gender;
    result = checkFun(age , gender);
    cout << result;
}
string checkFun(int age , char gender)
{
     string title;
    if(gender == 'm' && age >= 16)
      {
        title = "mr";
      }
     if(gender == 'm' && age <16)
      {
        title = "master";
      }
     if(gender == 'f' && age >=16 )
      {
        title =   "woman";
     }
    if(gender == 'f' && age <16)
     {
        title = " a girl";
     }
    return title;
}