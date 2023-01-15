#include <iostream>

using namespace std;

int volleyball (string year,int holidays,int weekends);

main()

{
    
string year;
    
int holidays;
    
int weekends;
    
int original;
    
cout << "enter year";
    
cin >> year;
    
cout << "enter holidays";
    
cin >> holidays;
    
cout << "enter weekends";
    
cin >> weekends;
   
original = volleyball(year,holidays,weekends);
   
cout << original;

}

int volleyball (string year,int holidays,int weekends)

{ 
    
float calculate;
    
float result;
    
float total;
    
float number;
    
float money;
    
float number2;
    
if (year=="normal")
    
{
        
calculate=holidays*0.6;
        
result = 48-weekends;
        
number=result*0.75;
        
result=calculate+weekends+ number;
        
return result;
    
    
}
     
if (year=="leap")
    
{
        
calculate=holidays*0.6;
        
result = 48-weekends;
       
number=result*0.75;
        
total=calculate+weekends+number;
        
amount = total*0.15;
        
number2=amount+total;
       
 return number2;
    
    
}

}