#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a,b;
public :
    sample(int x);
    sample(int x,int y);
    void display();
    void cal();
};
sample::sample(int x)
{
    a=x;
}


sample::sample(int x,int y)
{
    a=x;
    b=y;
}
void sample::display()
{
    cout << " Addition = " << a+b <<endl;
    cout << " subtraction = " << a-b <<endl;
    cout << " multiplication = " << a*b <<endl;
    cout << " division = " << a/b <<endl;
    cout << " modulus = " << a%b <<endl;
}
void sample::cal()
{
    cout << " square of a = " << a*a <<endl;
    cout << " curb of a = " << a*a*a <<endl;

}

int main()
{
    int a,b;
    cout << " Enter your number  " << endl;
    cin>> a >> b ;
    sample s1(a);
    sample s2(a,b);

    s1.cal();
    s2.display();

    getch();
    return 0;
}
