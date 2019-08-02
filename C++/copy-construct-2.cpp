#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a,b;
public :
    sample(int a,int b);
    sample(sample & x);
    void display();
    void cal();
};
sample :: sample(int c,int d)
{
    a=c;
    b=d;
}
sample :: sample(sample & x)
{
    a=x.a;
    b=x.b;
}
void sample :: display()
{
    if(a>b)
        cout << " A is the greatest " << endl;
    else
        cout << " B is the greatest " << endl;
}
int main()
{
    int a,b;
    cout << " Enter your number " << endl;
    cin>> a >> b;
    sample A(a,b);
    sample B(A);
    cout << " A = " ;
    A.display();
    cout << " B = " ;
    B.display();
    getch();
    return 0;
}
