#include <iostream>
#include <conio.h>

using namespace std;

class SI
{
private:
    int amount, rate, time, SimpInt;
public:
   SI()
    {
        cout<<"Enter Principal Amount:\n";
        cin>>amount;
        cout<<"Enter Rate of Interest:\n";
        cin>>rate;
        cout<<"Enter Period of time:\n";
        cin>>time;

        SimpInt=0;
        SimpInt = ( amount*rate*time)/100;
        cout<<" The simple interest is : "<<SimpInt;
    }
};
int main()
{
    SI obj;
    getch();
    return 0;
}
