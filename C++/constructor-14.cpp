#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int ar[5],i;
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
        cout << " array = " << ar[i]<< endl;

     for(i=4;i>=0;i--)
        cout << " reverse array = " << ar[i]<< endl;
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
