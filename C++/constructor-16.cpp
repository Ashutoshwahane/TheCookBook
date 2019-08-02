#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int ar[5],i,square;
public :
    void display();
    sample();
};
sample::sample()
{
    cout << " Enter your number " << endl;
    for(i=0;i<5;i++)
    cin>> ar[i];
}
void sample::display()
{
   for(i=0;i<5;i++)
            {
                square=ar[i]*ar[i];
                cout << " square = " << square << endl;

            }
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
