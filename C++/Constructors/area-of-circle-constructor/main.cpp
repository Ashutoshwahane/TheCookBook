#include <iostream>
#include <conio.h>

using namespace std;

class cal
{

double r;
double area;
public:
     cal()
    {
    cout<<"Value of r = "<<endl;
    cin>>r;

    area=3.14*r*r;
    cout<<"Area of circle is = "<<area;
    }
};
 int main()
 {
 cal A;
 getch();
 return 0;
 }
