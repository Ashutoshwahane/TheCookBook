#include <iostream>
#include <conio.h>

using namespace std;

class calculate
{
public:
    int volume(int s)
    {
        return (s*s*s);
    }
    double volume(double r ,int h)
    {
       return (3.14 * r * h);
    }
    int volume(int l,int b,int h)
    {
      return (l*b*h);
    }

};
int main()
{
   calculate C;
    cout<<C.volume(10)<<endl;
    cout<<C.volume(3.8,5)<<endl;
    cout<<C.volume(100,75,15)<<endl;
    getch();
    return 0;
}
