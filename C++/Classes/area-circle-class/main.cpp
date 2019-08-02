#include <iostream>
#include <conio.h>

using namespace std;

class cal
{

double r;
double area;
public:
void getdata()
{
    cout<<"Value of r = "<<endl;
    cin>>r;
}
void display()
{

 area=3.14*r*r;
 cout<<"Area of circle is = "<<area;
 }
};
 int main()
 {
 cal A;
 A.getdata();
 A.display();
 getch();
 return 0;
 }
