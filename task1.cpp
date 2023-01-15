#include <iostream>
using namespace std;
char grade(int number);
main()
{
    int number;
    char result;
    cout << " enter number:";
    cin >> number;
    result = grade(number);
    cout << result;
}
char grade(int number)

{
    int grade;
    if(number < 50)
    {
      grade = 'F';
    }
    else if(number >=50 && number <=60)
    {
        grade = 'E';
    }
    else if(number >=61 && number <=70)
    {
        grade ='D';
    }
    else if(number >=71 && number <=80)
    {
        grade = 'C';
    }
    else if(number >=81 && number <=85)
    {
        grade ='B';
    }
    else 
    {
        grade ='A';
    }
return grade;
}