#include<iostream>
#include<fstream>
#include<conio.h>
#include<windows.h>
using namespace std;

class restaurant
{
public:
    void order()
    {
    int choice, schoice, schoice1, quantity, pchoice1;
    char gotostart;
      beginning:
    cout<<"Hello"<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t--------Menu--------\n\n";

	cout<<"1) Starters\n";
	cout<<"2) Main Course\n";
	cout<<"3) Dessert\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1)
	 {
		cout<<"1) "<<"Spring Rolls"<<"\n";
		cout<<"2) "<<"French Onion Soup"<<"\n";
		cout<<"3) "<<"Tomato Bruschetta"<<"\n";
		cout<<"4) "<<"Caesar Salad"<<"\n";
		cout<<"\nPlease Enter which Starter would you like to have?:";
		cin>>schoice;
		if(schoice>=1 && schoice<=4)
		{
			cout<<"\n1) Half : Rs 250\n"<<"2) Full : Rs 500\n";
			cout<<"\nChoose Size Please:";
			cin>>schoice1;
			if(schoice1>=1 && schoice1<=2)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;

		cout<<"\n\n\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='y' || gotostart=='y')
			{
			  goto beginning;
			}
        }
      }
      else if(choice==2)
	 {
		cout<<"\n1 "<<"Saffron Rice"<<" Rs.180"<<"\n";
		cout<<"2 "<<"Spinach Rice"<<" Rs.150"<<"\n";
		cout<<"3 "<<"Cumin Rice"<<" Rs.160"<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice1;
    if(schoice1>=1 && schoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
		}
	 }
	 cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y')
			{
			  goto beginning;
            }

    else if (choice==3)
	 {
		cout<<"\n1  "<<"Apple Pie with ice cream"<<" Rs.240"<<"\n";
		cout<<"2  "<<"Lemon Meringue Pie"<<" Rs.160"<<"\n";
		cout<<"3  "<<"Vanilla Ice Cream"<<" Rs.100"<<"\n";
		cout<<"3  "<<"Fruit Salad"<<" Rs.100"<<"\n";
		cout<<"\nPlease Enter which Desert you would like to have?:";
		cin>>schoice1;
		if(schoice1>=1 && schoice1<=4)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
		}
	 }
	  cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='y')
			{
			  goto beginning;
            }

int a,b,c,t,t1;
float tax;
a=schoice*quantity;
b=pchoice1*quantity;
c=schoice1*quantity;
t=a+b+c;
tax=a+b+c*5/100;
t1=t+tax;
                        cout << "\n\t\t\t\t\t\t\t================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|              Food Billing System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<t<<endl;
                        cout<<"\t\t\t\t\t\t\t ";
                        cout<<"\t\t\t\t\t\t\tTOTAL BILL WITH TAX IS : "<<t1;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

cout<<"ORDER PLACED SUCCESSFULLY!!!";
cout<<"THANK YOU , PLEASE VISIT AGAIN";

}
};


class startup
{
public:
void login()
{
        int count,c;
        c:
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
        cin>>user;
        cout<<"PASSWORD :";
        cin>>pass;

        ifstream input("database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");

                }
        }
        input.close();
        if(count==1)
        {
                cout<<"\nHello  "<<user<<"\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
                cin.get();
                cin.get();
                restaurant r;
                r.order();
        }
        else
   {

   	cout<<"\n\t\t\t\t\t\t\t ";
   	for(int a=1;a==1;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "You Have Entered Wrong Details";
	}
   	cout<<"\n\n";


   }
}

void registr()

{
        string reguser,regpass,ru,rp;
        system("cls");
        cout<<"Enter the username :";
        cin>>reguser;
        cout<<"\nEnter the password :";
        cin>>regpass;

        ofstream reg("database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        cout<<"\nRegistration Sucessful\n";


}
void start()
{
    int a;
    a:
        int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to Startup page                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        startup b1;
                        b1.login();
                        break;

                case 2:
                        startup b2;
                        b2.registr();
                        break;
                case 3:

                        cout<<"Thanks for using this program\n\n\n";
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl;
                        goto a;
        }
}

};


int main()
{
    int a;
    a:
        int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to Startup page                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                        startup b1;
                        b1.login();
                        break;
                case 2:
                        startup b2;
                        b2.registr();
                        break;
                case 3:

                        cout<<"Thanks for using this program\n\n\n";
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl;
                        goto a;
        }
}


