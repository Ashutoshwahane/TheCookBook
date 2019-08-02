
#include<iostream>
#include<conio.h>
using namespace std;
class text
{
private :
    int a,b;
    char ch;
public :
    text(int,int);
    void display();
    ~text();
} ;
text :: text(int x , int y)
{
    a=x;
    b=y;
}
text :: ~ text()
{
    cout << " Destructor call " << endl;
}
void text :: display()
{
    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
}
int main()
{
    text t1(100,200);
    t1.display();
    getch();
    return 0;
}

