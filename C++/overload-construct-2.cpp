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
    if(a>b)
        cout << " A is the Greatest " << endl;
    else
        cout << " B is the Greatest " << endl;
}
void sample::cal()
{
    if(a%2==0)
        cout << " Even number " << endl;
    else
        cout << " Odd number " << endl;
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
