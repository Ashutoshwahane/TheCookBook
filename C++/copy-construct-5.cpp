#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int no,i;
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
    for(i=1;i<=10;i++)
    {
        cout << no << " * " << i << " = " << no*i << endl;
    }
}
int main()
{
    int no;
    cout << " Enter your number " << endl;
    cin >> no;
    sample A(no);
    sample B(A);
    cout << " A = " << endl ;
    A.display();
    cout << " B = " << endl ;
    B.display();
    getch();
    return 0;
}
