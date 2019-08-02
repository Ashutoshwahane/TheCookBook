#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int a,b,c,cnt;
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
    for(cnt=2;cnt<=10;cnt++)
      {
        c=a+b;
        cout << c << endl;
        a=b;
        b=c;
      }
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
