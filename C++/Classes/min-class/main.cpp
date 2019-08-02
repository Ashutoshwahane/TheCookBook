#include <iostream>
#include <conio.h>

using namespace std;

class Minimum
{
private:
    int a,b,c;
    float x,y;
public:
    void Min(int,int)
    {
        if (a < b)
        {
            cout<<"a is minimum "<<endl;
        }
        else
        {
            cout<<"b is minimum "<<endl;
        }

    }
    void Min(double,double)
    {
        if(x<y)
        {
            cout<<"x is minimum "<<endl;
        }
        else
        {
            cout<<"y is minimum "<<endl;
        }
    }
    void Min(int,int,int)
    {
        if(a<b && a<c)
            cout<<"a is minimum "<<endl;
        else if(b<a && b<c)
            cout<<"b is minimum "<<endl;
        else
            cout<<"c is minimum "<<endl;
    }
};
int main()
{
    Minimum obj;
    obj.Min(10,20);
    obj.Min(10.5,12.5);
    obj.Min(10,20,30);
    getch();
    return 0;
}
