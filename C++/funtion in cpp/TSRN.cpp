//take something return nothing
//run time initilisation




#include<iostream>
#include<conio.h>
using namespace std;

class cal
{
    private:
            int a,b;
    public:

            void result(int x,int y)

            {
                cout<<"the ans is = "<<x+y;

            }
};


int main()

{
    cal o;
    int a,b;
    cout<<"enter two no";
    cin>>a>>b;
    o.result(a,b);
    getch();
    return 0;

}
