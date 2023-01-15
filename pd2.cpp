#include <iostream>
using namespace std;
main()
{
    string subject1;
    string subject2;
    string subject3;
    string subject4;
    string subject5;
    float percentage;
    int result;
    int englishmarks;
    int mathmarks;
    int chemistrymarks;
    int socialsciencemarks;
    int biologymarks;
    string name;
    int marks;

    cout << "enter subject 1:";
    cin >> subject1;
    cout << "enter subject 2:";
    cin >> subject2;
    cout << "enter subject 3:";
    cin >> subject3;
    cout << "enter subject 4:";
    cin >> subject4;
    cout << "enter subject 5:";
    cin >> subject5;
    cout << "enter english";
    cin >> englishmarks;
    cout << "enter math:";
    cin >> mathmarks;
    cout << "enter chemistry:";
    cin >> chemistrymarks;
    cout << "enter socialscience:";
    cin >> socialsciencemarks;
    cout << "enter biology:";
    cin >> biologymarks;


    result = englishmarks + mathmarks + chemistrymarks + socialsciencemarks + biologymarks;
    
    cout << "enter user name:";
    cin >> name;
    cout << " result is:" << result << endl;
    
    percentage = (result/500)*100;
    cout << percentage;
    
    char grade;
    if(percentage > 90 && percentage < 100)
    {
        cout << "grade: A+";
    }
    if(percentage > 80 && percentage < 90)
    {
        cout << "grade: A";
    }
    if(percentage > 70 && percentage < 80)
    {
        cout << "grade: B+";
    }
    if(percentage > 60 && percentage < 70)
    {
        cout << "grade: B";
    }
    if(percentage > 50 && percentage < 60)
    {
        cout << "grade: C";
    }
}