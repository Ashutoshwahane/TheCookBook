#include <iostream>
#include <conio.h>

using namespace std;

class average
{
private:
 int a,b,c;

public:
    void getdata();
    inline void Avg()
    {
        cout<<"The average is = "<<(a+b+c)/3;
    }
};

void average :: getdata()
{
    {
        cout<<"Enter value for a = ";
        cin>>a;
        cout<<"Enter value for b = ";
        cin>>b;
        cout<<"Enter value for c = ";
        cin>>c;
    }

}
int main()
{
    average AV;
    AV.getdata();
    AV.Avg();
    getch();
    return 0;
}
