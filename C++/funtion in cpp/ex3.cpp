//take SOMETHING return nothing
//run time initilization


#include<iostream>
#include<conio.h>
using namespace std;

class cal
{
    private:
            int a,b;
    public:
            void setdata(int x,int y)
            {
                a=x;  //destination=source
                b=y;

            }
            void result()

            {
                cout<<"the ans is = "<<a+b;

            }
};


int main()

{
    cal o;
    int p,q;
    cout<<"enter no";
    cin>>p>>q;
    o.setdata(p,q);
    o.result();
    getch();
    return 0;

}
