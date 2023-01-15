#include <iostream>
using namespace std;

main()
{
   int studio;
   int stay;
   string month;
   float discountofstudio;
   float discountofappartment;
   float rateofstudio;
   float rateofappartment;
   float originalrateofstudio;
   float foriginalrateofappartment;
   cout << "Enter the month: ";
   cin >> month;
   cout << "Enter the number of stay: ";
   cin >> stay;


  if(month == "may" || month == "october")
  {
      rateofstudio=stay*50;
      rateofappartment=stay*65;

      if(stay>7 && stay <14)
      {
        discountofstudio=rateofstudio*0.05;
        originalrateofstudio=rateofstudio-discountofstudio;
      }
      else if(stay>=14)
      {
        discountofstudio=rateofstudio*0.3;
        originalrateofstudio=rateofstudio-discountofstudio;  
        discountofappartment=rateofappartment*0.1;
        foriginalrateofappartment=rateofappartment-discountofappartment;      
      }
  }
  else if(month== "june" || month == "september")
  {
      rateofstudio=stay*75.2;
      rateofappartment=stay*68.7;

      if(stay<=14)
      {
         originalrateofstudio=rateofstudio;
         foriginalrateofappartment=rateofappartment;
      }

      if(stay>14) 
      {
        discountofstudio=rateofstudio*0.2;
        originalrateofstudio=rateofstudio-discountofstudio;   
        discountofappartment=rateofappartment*0.1;
        foriginalrateofappartment=rateofappartment-discountofappartment;     
      }
      
  }

 else if(month== "july" || month == "august")
  {
       originalrateofstudio=stay*76.0;
       rateofappartment=stay*77.0;
    if(stay>=14)
    {
       discountofappartment=rateofappartment*0.1;
      foriginalrateofappartment=rateofappartment-discountofappartment;
    }
  }
 

cout << "Studio rate: " << originalrateofstudio<< " $" << endl;
cout << "Apartment rate: " << foriginalrateofappartment << " $" << endl;

}