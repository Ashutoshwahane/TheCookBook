#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int no,no1,no2,no3,sum;
public :
    sample(int);
    void display();
};
sample :: sample(int x)
{
    no=x;
    sum=0;
}
void sample :: display()
{
    no1=no/100;
    no2=(no%100)/10;
    no3=no%10;
    sum=(no1*no1*no1)+(no2*no2*no2)+(no3*no3*no3);
    if(no==sum)
        cout << " Armstrong Number " << endl;
    else
        cout << " Not a Armstrong Number " << endl;
}
int main()
{
    int a;
    cout << " Enter your number " << endl;
    cin>> a;
    sample s1(a);
    s1.display();
    getch();
    return 0;
}
