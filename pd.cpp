#include <iostream>
using namespace std;
main()
{
int xcoord;
int ycoord;
int h;
int rangex;
int rangey;
cout << " enter integer:";
cin >> h;
cout << " enter x coordinate:";
cin >> xcoord;
cout << " enter y coordinate:";
cin >> ycoord;
rangex = h*3;
rangey = h*4;
if(xcoord < rangex && ycoord < h)
{
   cout << "inside";
}
else if((xcoord > h && xcoord < 2*h) && (ycoord > h && ycoord < rangey))
{
 cout << "inside";
}
else if( xcoord < h && ycoord > h)
{
cout << "outside";
}
else if(xcoord < rangex && ycoord > rangey)
{
cout << "outside";
}
else if(xcoord > 2*h && ycoord >h)
{
  cout << "outside";
}
else 
{
cout << " border";
}
}

