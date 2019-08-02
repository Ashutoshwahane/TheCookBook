#include <iostream>
#include <conio.h>

using namespace std;

class armstrong
{
private:
    int no, r, sum, num;

public:
    armstrong ()
    {
      cout<<"Enter a number to check if its Armstrong or not=\n";
      cin>>no;

      sum = 0;
    num=no;
    while(no>0)
    {
        r = no % 10 ;
      sum = sum + (r * r *r);
       no = no/10;
    }

    if(num == sum)
     cout<<"It is an Armstrong number";
    else
     cout<<"It is not an Armstrong number";

    }

};

int main()
{
    armstrong A;
    getch();
    return 0;
}
