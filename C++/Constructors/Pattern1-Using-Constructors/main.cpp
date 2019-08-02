#include <iostream>
#include <conio.h>

using namespace std;

class pattern
{
private:
     int r,c,l;
public:
    pattern()
    {
       cout<<"Enter number of rows: ";
       cin>>l;
       for(r=1;r<=l;r++)
       {
           for(c=1;c<=r;c++)
           {
            cout<<c;
           }
           cout<<"\n";
       }

    }
};
int main()
{
    pattern P;
    getch();
    return 0;
}
