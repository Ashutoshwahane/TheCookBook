#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int ar[5],i,sum=0,multi;
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
            sum=sum+ar[i];
            cout << " sum of array = " << sum << endl;
        }
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
