#include <iostream>
using namespace std;
float totalIncome(string type, int rows, int columns);
main()
{
    string type;
    int rows;
    int columns;
    int result;
    cout << " enter rows:";
    cin >> rows;
    cout << " enter columns:";
    cin >> columns;
    cout << "enter type:";
    cin >> type;
    result = totalIncome(type , rows, columns);
    cout << result;


}
float totalIncome(string type, int rows, int columns)
{
    float price;
    int seats;
    seats = (rows * columns); 
    if(type == "premiere")
    {
    price = seats * 12.0;
    }
    if(type == "normal")
    {
    price = seats * 7.50;
    }
    if(type =="cheapest")
    {
        price = seats * 5.0;
    }
    return price;
}