#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a,b,c,f,sum,cnt,i;
public :
    sample(int x);
    sample(int x,int y);
    void display();
    void cal();
};
sample::sample(int x)
{
    a=x;
    f=1;
}


sample::sample(int x,int y)
{
    a=x;
    b=y;
}
void sample::display()
{
   for(cnt=2;cnt<=10;cnt++)
   {
       c=a+b;
       cout << c <<endl;
       a=b;
       b=c;
   }
}
void sample::cal()
{
    for(i=a;i>=1;i--)
    {
        f=f*i;
    }
    cout << " Factorial = " << f << endl;
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

