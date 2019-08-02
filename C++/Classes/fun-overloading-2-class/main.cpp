#include <iostream>
#include <conio.h>

using namespace std;

class overloading
{
    public:
   void fun()
   {
       for(int i = 0;i<=10;i++)
       {
           cout<<"#";
       }
   }
   void fun(char ch)
   {
       for(int i=0;i<=8;i++)
       {
           cout<<ch<<endl;
       }
   }
   void fun(int no,char ch)
   {
       for(int i = 0;i<=no;i++)
       {
           cout<<ch;
       }
   }
};
int main()
{
    overloading O;
    O.fun('r');
    O.fun('@');
    O.fun(6,'#');
    getch();
    return 0;

}

