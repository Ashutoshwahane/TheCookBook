#include <iostream>
#include <conio.h>

using namespace std;

class over
{
public:
    int add(int x,int y)
    {
        return (x+y);
    }
    int add(int x,int y,int z)
    {
       return (x+y+z);
    }
    int add(int x,int y,int z,int a)
    {
      return (x+y+z+a);
    }

};
int main()
{
    over A;
    cout<<A.add(10,20)<<endl;
    cout<<A.add(10,20,30)<<endl;
    cout<<A.add(10,20,30,40)<<endl;
    getch();
    return 0;
}
