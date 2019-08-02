#include <iostream>
#include <conio.h>

using namespace std;

class students
{
private:
    char name[10],course[15];
    int rollno;
public:
    void getdata();
    void display();
};
void students :: getdata()
{
    cout<<"Enter student's name: ";
    cin>>name;
    cout<<"Enter student's roll number: ";
    cin>>rollno;
    cout<<"Enter student's course: ";
    cin>>course;
}
void students :: display()
{
    cout<<"Student's name is : "<<name<<endl;
    cout<<"Student's roll no is : "<<rollno<<endl;
    cout<<"Student's course is : "<<course<<endl;
}

const int size = 3;
int main()
{
    students S1[size];
    for (int i = 0;i<size;i++)
    {
        cout<<"Enter information for student:\n";
        S1[i].getdata();

    }
    for(int i=0;i<size;i++)
        {
        cout<<"Student = "<<i+1<<endl;

        S1[i].display();
        }

    getch();
    return 0;
}
