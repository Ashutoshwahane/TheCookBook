#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a;
public :
    sample();
    sample(int a);
    sample(sample & x);
    void display();
};
sample::sample()
{

}
sample::sample(int b)
{
    a=b;
}
sample::sample(sample & x)
{
    a=x.a;
}


void sample::display()
{
    cout << " a = " << a <<endl;
}
int main()
{
    sample A(100);
    sample B(A);
    cout << " Value of A = " << endl;
    A.display();
    cout << " Value of B = " << endl;
    B.display();
    getch();
    return 0;
}
