//take nothing return nothing
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
                cout<<"enter two no";
                cin>>a>>b;

            }
            void result()

            {
                cout<<"the ans is = "<<a+b;

            }
};


int main()

{
    cal o;
    o.getdata();
    o.result();
    getch();
    return 0;

}
