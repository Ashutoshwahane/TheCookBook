//take something return something
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
            int result()

            {
                return(a+b);

            }
};


int main()

{
    cal o;
    int p,q,sum;
    cout<<"enter no";
    cin>>p>>q;
    o.setdata(p,q);
    //sum=o.result();
    cout<<"the addition is = "<<o.result();
    getch();
    return 0;

}
