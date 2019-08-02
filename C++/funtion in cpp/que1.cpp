//take something return nothing
//compile time initilisation




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

    o.result(5,4);
    getch();
    return 0;

}
