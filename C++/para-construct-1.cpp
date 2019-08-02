#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a,b;
public :
    sample(int,int);
    void display();
};
sample :: sample(int x,int y)
{
    a=x;
    b=y;
}
void sample :: display()
{
    cout << " addition = " << a+b << endl;
    cout << " subtraction = " << a-b << endl;
    cout << " multiplication = " << a*b << endl;
    cout << " division = " << a/b << endl;
    cout << " modulus = " << a%b << endl;
    cout << " square of a = " << a*a << endl;
    cout << " curb of a= " << a*a*a << endl;
    cout << " square of b = " << b*b << endl;
    cout << " curb of b= " << b*b*b << endl;
}
int main()
{
    int a,b;
    cout << " Enter your number " << endl;
    cin>> a >> b;
    sample s1(a,b);
    s1.display();
    getch();
    return 0;
}
