#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a,b;
public :
    sample(int a);
    sample(sample & x);
    void display();
    void cal();
};
sample :: sample(int b)
{
    a=b;
}
sample :: sample(sample & x)
{
    a=x.a;
    b=x.b;
}
void sample :: display()
{
    if(a%2==0)
        cout << " Even number " << endl;
    else
        cout << " Odd number " << endl;
}
int main()
{
    int a;
    cout << " Enter your number " << endl;
    cin >> a;
    sample A(a);
    sample B(A);
    cout << " A = " ;
    A.display();
    cout << " B = " ;
    B.display();
    getch();
    return 0;
}
