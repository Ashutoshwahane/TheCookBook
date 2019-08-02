//take nothing return something
//run time initilization


#include<iostream>
#include<conio.h>
using namespace std;

class cal
{
    private:
            int a,b;
    public:
            int getdata1()
            {
               cout<<"e first no";
               cin>>a;
               return a;

            }
            int getdata2()
            {
               cout<<"e second no";
               cin>>b;
               return b;

            }
            int result(int x,int y)

            {
                return(x+y);
            }
};


int main()

{
    int p,q;
    cal o;
    p=o.getdata1();
    q=o.getdata2();
    cout<<"ans "<<o.result(p,q);
    getch();
    return 0;

}
