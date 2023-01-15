#include <iostream>
using namespace std;
main()
{
    int h;
    int xrange;
    int xmax;
    int coorx;
    int coory;
    cout << "enter integer:";
    cin >> h;
    cout << "enter coordinate x:";
    cin >> coorx;
    cout << "enter coordinate y:";
    cin >> coory;
    xmax = 3*h;
    ymax = h*4;
    if(h<=xmax)
    {
        if((coorx>=h && coorx<=2h && coory==ymax) || (coory ==xmax && coory==h))
        {
            cout << "inside";
        }

    }
   else if((x==h || x==2h || x==3h) && y==0)
    {
         cout << "on border";
    }
    else
    {
    cout << "outside";
    }
}