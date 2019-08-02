#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int ar[5],i;
    int ar1[5];
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
    ar1[i]=ar[i];
   for(i=0;i<5;i++)
        cout << " copy array ar1[i] = " << ar1[i] << endl;
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
