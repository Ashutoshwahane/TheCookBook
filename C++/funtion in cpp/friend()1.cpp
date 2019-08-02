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
            void getdata()
            {
               cout<<"e 2 no  ";
               cin>>a>>b;

            }
            friend int result(cal x);


};


int result(cal x)
{
    return(x.a+x.b);
}

int main()

{
    cal o;
    o.getdata();

    cout<<"ans "<<result(o);
    getch();
    return 0;

}
