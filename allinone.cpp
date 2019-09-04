#include<iostream>
//#include<conio.h>
#include<stdlib.h>
using namespace std;

class index
{

	private: int choice,number1,number2,basic_ch,num,radius,marks,leap;
		 float pi=3.14,area,per,div;
	public:
		int mainindex()
	        {
			cout<<"\n \n \t \t \t \t |****INDEX OR CONTENT****| \n";
			cout<<" \n \t \t 1 : BASIC IN C++ \n \t \t 2 : ARRAYS / STRING \n \t \t 3 : FUNCTION IN C++ \n";
 			cout<<"\t \t 4 : CLASSES AND OBJECT \n \t \t 5 : INHERITANCE \n \t \t 6 : POLYMORPHISM \n \t \t 7 : FILE HANDLING \n";
			cout<<"\t \t 8 : EXCPTION HANDLING \n \n \n ";
			cout<<"ENTER YOUR CHOICE : ";
 			cin>>choice;
			return(choice);
            }

		void accept()
		{
			cout<<"\n \n \t \t ENTER FIRST NUMBER : ";
			cin>>number1;
			cout<<"\t \t ENTER SECOND NUMBER : ";
			cin>>number2;

		}

		void basic()
		{
			cout<<"\n \n \t \t \t \t |****BASIC IN C++****|";
			cout<<"\n \n \t \t 1 : HELLO WORLD \n \t \t 2 : ODD & EVEN ";
			cout<<"\n \t \t 3 : AREA OF CIRLE \n \t \t 4 : SWAPPING USING THIRD VARIABLE ";
			cout<<"\n \t \t 5 : TO FIND SQUARE & CUBE OF NUMBER \n \t \t 6 : TO FIND NUMBER IS +VE OR -VE ";
			cout<<"\n \t \t 7 : TO FIND PERCENTAGE & GRADE (USING ELSE IF LADDER) \n \t \t 8 : TO CHECK LEAP YEAR";
			cout<<"\n \t \t 9 : TO SHOW TEACHERS NAME (SWITCH CASE) \n \t \t 10 : ARITHEMATIC CALCULATOR (SWITCH CASE) \n \n";
			cout<<" ENTER YOUR CHOICE TO SEE THE OUTPUT : ";
			cin>>basic_ch;

			if(basic_ch==1)
				{
					cout<<"\n \n \t \t 1 : Hello World => ";
					cout<<"HELLO TO THE WORLD OF PROGRAMMING \n \n";

				}

			if(basic_ch==2)
				{
					cout<<"\n \n \t \t 1 : ODD & EVEN => ";
					cout<<"ENTER A NUMBER : ";
					cin>>num;
					if(num%2==0)
						cout<<"\n \t \t \t \t "<<num<<" IS EVEN NUMBER";
					else
						cout<<"\n \t \t \t \t"<<num<<" IS ODD NUMBER";

				}
			if(basic_ch==3)
				{
					cout<<"\n \n \t \t 1 : AREA OF CIRCLE => ";
					cout<<"ENTER A RADIUS OF CIRCLE : ";
					cin>>radius;
					area=(radius*radius)*pi;
						cout<<"\n \t \t \t \t"<<"THE AREA OF CIRCLE IS : "<<area;

				}

			if(basic_ch==4)
				{
					cout<<"\n \n \t \t 1 : SWAPPING USING THIRD VARIABLE => \n";
					int temp;
					accept();
					temp=number1;
					number1=number2;
					number2=temp;
					cout<<"\n \n \t \t \t FIRST NUMBER IS : "<<number1;
					cout<<"\n \t \t \t SECOND NUMBER IS : "<<number2;
				}

			if(basic_ch==5)
				{
					cout<<"\n \n \t \t 1 : TO FIND SQUARE & CUBE OF NUMBER => \n";
					cout<<"\n \t \t ENTER A NUMBER : ";
					cin>>num;
						cout<<"\n \t \t \t \t"<<"SQUARE OF "<<num<<" IS : "<<num*num;
						cout<<"\n \t \t \t \t"<<"CUBE OF "<<num<<" IS : "<<num*num*num;


				}

			if(basic_ch==6)
				{
					cout<<"\n \n \t \t 1 : TO FIND NUMBER IS +VE OR -VE => \n \n";
					cout<<"\t ENTER A NUMBER : ";
					cin>>num;
					if(num>0)
						cout<<"\n \t \t \t \t "<<num<<" IS POSITIVE NUMBER";
					else
						cout<<"\n \t \t \t \t"<<num<<" IS NEGATIVE NUMBER";

				}

			if(basic_ch==7)
				{
					cout<<"\n \n \t \t 1 : TO FIND PERCENTAGE & GRADE (USING ELSE IF LADDER) => \n \n";
					cout<<"\t \t ENTER FIVE SUBJECTS TOTAL MARKS : ";
					cin>>marks;
					per=marks/5;
					cout<<"\t \t";
					cout<<" \n \n YOUR PERCENTAGE IS : "<<per;
					cout<<"\t \t";
					if(per>=75 && per<=100)
						cout<<"YOU ARE DISTINCTION !";

					else if(per>=60 && per<75)
						cout<<"YOU ARE FIRST CLASS !";
					else if(per>=50 && per<60)
						cout<<"YOU ARE SECOND CLASS !";
					else if(per>=35 && per<50)
						cout<<"YOU ARE JUST PASS !";
					else
						cout<<"YOU ARE FAIL !";
					cout<<endl<<endl;
				}

			if(basic_ch==8)
				{
					cout<<"\n \n \t \t \t 1 : TO CHECK LEAP YEAR => \n \n";
					cout<<"\t \t ENTER LEAP YEAR : ";
					cin>>leap;
					cout<<endl<<endl<<"\t \t ";
					if(leap % 100 == 0 && leap % 400 == 0 || leap % 4 ==0 && leap % 100 != 0)
						cout<<leap<<" IS "<<" LEAP YEAR";
					else
						cout<<leap<<" IS NOT"<<" LEAP YEAR";
				}

			if(basic_ch==9)
				{
					cout<<"\n \n \t \t 1 : TO SHOW TEACHERS NAME (SWITCH CASE) => \n \n";
					cout<<" \t \t \t \t 1 = C++ \n \t \t \t \t 2 = VB.NET \n \t \t \t \t 3 = E-COMMERCE \n \t \t \t \t 4 = DBMS \n";
 					cout<<" Enter your choice : ";
					cin>>num;

					switch(num)
					{
 						case 1:
							 cout<<"\n \n \t \t \t RESPECTED REENA MAM";
							 break;
  						case 2:
							 cout<<"\n \n \t \t \t RESPECTED MEENAL MAM";
							 break;
  						case 3:
							 cout<<"\n \n \t \t \t RESPECTED SUPRIYA MAM";
							 break;
  						case 4:
							 cout<<"\n \n \t \t \t VERY VERY RESPECTED REENA MAM";
							 break;
					       default:
							 cout<<"\n \n \t \t \t kya mam sahi option select karo";
					}
				}

			if(basic_ch==10)
				{

					cout<<"\n \n \t \t \t 1 : ARITHEMATIC CALCULATOR (SWITCH CASE) => \n \n";
					accept();
					cout<<"\n \n \t \t 1 : ADDITION \n \t \t 2 : SUBTRACTION ";
					cout<<"\n \t \t 3 : MULTIPLICATION \n \t \t 4 : DIVISION ";

					cout<<" \n \n ENTER YOU CHOICE : ";
					cin>>choice; cout<<endl<<endl<<"\t \t";
					switch(choice)
					{
						case 1:
							cout<<"ADDITION OF "<<number1<<" & "<<number2<<" IS : "<<number1+number2; break;

                				case 2:
							cout<<"SUBTRACTION OF "<<number1<<" & "<<number2<<" IS : "<<number1-number2; break;
						case 3:
							cout<<"MULTIPLICATION OF "<<number1<<" & "<<number2<<" IS : "<<number1*number2; break;
						case 4:
							div=number1/number2;
							cout<<"DIVISION OF "<<number1<<" & "<<number2<<" IS : "<<div; break;

						default: cout<<"PLEASE ENTER VALID NO";
					}
				}
		}


};

int main()
{
 int ch;
 char ans='y';
 index mi;
 cout<<"\n \n \n \t \t \t \t |****ALL IN ONE / ONE IN ALL****| \n \n \n";
 cout<<"\t \t  |****THIS PROGRAM IS FOR NEW STUDENTS TO START LEARNING IN C++****| \n \n \n";
 cout<<"\t \t \t \t |****THE PROGRAMS ARE GIVEN BELOW.****| \n \t \t \t  |****SELECT THE CORRECT OPTION TO SEE THE OUTPUT****| \n \n \n";
 while(ans=='y' || ans=='Y')
 {
	 ch=mi.mainindex();
		switch(ch)

		{
			case 1:
				mi.basic(); break;
			/*case 2:
				mi.arr();break;
			case 3:
				mi.fun();break;
			case 4:
				mi.class();break;
			case 5:
				mi.inher();break;
			case 6:
				mi.poly();break;
			case 7:
				mi.file();break;
			case 8:
				mi.excep();break;*/

			default : cout<<" PLEASE ENTER THE CORRECT OPTION";

		}
 	cout<<"\n \n \tDO YOU WANT TO CONTINUE [Y/n] ! : ";
 	cin>>ans;
	system("clear");
 }


//getch();
return 0;
}
