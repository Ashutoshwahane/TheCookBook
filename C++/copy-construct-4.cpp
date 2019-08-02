#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int no,no1,no2,no3,sum;
public :
    sample(int a);
    sample(sample & x);
    void display();
    void cal();
};
sample :: sample(int b)
{
    no=b;
}
sample :: sample(sample & x)
{
    no=x.no;
}
void sample :: display()
{
    no1=no/100;
    no2=(no%100)/10;
    no3=no%10;
    sum=(no1*no1*no1)+(no2*no2*no2)+(no3*no3*no3);
    if(no==sum)
        cout << "  Armstrong Number " << endl;
    else
        cout << " Not a Armstrong Number " << endl;
}
int main()
{
    int no;
    cout << " Enter your number " << endl;
    cin >> no;
    sample A(no);
    sample B(A);
    cout << " A = " ;
    A.display();
    cout << " B = " ;
    B.display();
    getch();
    return 0;
}
