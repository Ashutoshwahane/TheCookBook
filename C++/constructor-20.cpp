#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
private :
    int ar[5];
    int i,j,temp;
public :
    void display();
    sample();
};
sample::sample()
{
    cout << " Enter your numbers " << endl;
    for(i=0;i<5;i++)
    cin>> ar[i];
}
void sample::display()
{
    for(i=1;i<5;i++)
    {
        for(j=i+1;j<5;j++)
           {
               if(ar[i] > ar[j])
               {
                   temp = ar[i];
                   ar[i] = ar[j];
                   ar[j] = temp;
               }
           }
    }
    for(i=0;i<5;i++)
        cout << ar[i] ;
}
int main()
{
    sample s1;
    s1.display();
    getch();
    return 0;
}
