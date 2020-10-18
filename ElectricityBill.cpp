#include<iostream>
#include<string.h>
#include<string>
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include <stdlib.h>
#include <fstream>
#include<ctime>
#include <dos.h>
void time();
void time()
{
    time_t tt;

    struct tm * ti;

    time (&tt);

    ti = localtime(&tt);

         std::cout<<"\t\t\t\t\t" <<asctime(ti);
}

using namespace std;
string userdata_1();//function for input and output operations also calculates the units consumed

struct userdata
{
char name[100];//stores name
    float units;//stores units consumed
    long int customerid;//stores customer id
   char billtype;//stores bill type
};

class userdatacal{
public:
void exitdisplay()
{
      system("cls");
string bye = "Thank you:)";
int x=0;
while ( bye[x] != '\0')
{
	cout << bye[x];
	Sleep(100);
	x++;
};
getch();
exit(0);
}

string userdata1()
{ int i=1,n;
userdata user;
char email1,email2,email3;
email1=80;
email2=70;
email3=65;
email1++;
email2++;
email3++;
system("cls");
cout<<"\nEnter the number of entries you want ";
cin>>n;
int exitcaller;
int l;
l=0;
exitcaller=1;
for(i=0;i<=n;i++)
{
   cout<<"Please fill in the details"<<endl;
    cout<<"Name: ";
cin>>user.name;

 cout<<"Customer ID: ";
 cin>>user.customerid;
 cout<<"Bill type:";
 cout<<"\nC-Commercial";
 cout<<"\nD-Domestic"<<endl;
 cin>>user.billtype;
 cout<<"Units consumed: ";
 cin>>user.units;
 system("pause");
system("cls");
if(user.billtype==67||user.billtype==99)
{


cout<<"\n\tUsername: "<<"DSD CORPORATION"<<endl;
    cout<<"\n\tCustomer ID: "<<user.customerid<<endl;
    cout<<"\n\tUnits consumed: "<<user.units<<"KWH"<<endl;
    cout<<"\nADDRESS:";

cout<<"\n\tStreet:"<<20+i<<" DSD Corporation building,3rd Avenue,Bandra(west)";
cout<<"\n\tCity: Mumbai";
cout<<"\n\tState: Maharashtra";
cout<<"\n\tZip Code:"<<400055+2*i;
cout<<"\n\tPhone Number:"<<222205313+2*i;
cout<<"\n\tEmail:"<<email1<<email2<<email3<<"@gmail.com";
float cost,i=0,j=0,k=0,l=0;
//logic for operation works here

    if(user.units<101)
    {
        cost=30+2.96*user.units;
        i=cost;
    }
    else if(user.units<300)
    {
        cost=50+296+5.56*(user.units-100);
        j=cost-296;
        i=296+30;
    }
    else if(user.units<501)
    {
        cost=50+296+5.56*200+9.16*(user.units-300);
        k=cost-(296+5.56*200);
        i=296+30;
        j=200*5.56+50;
    }
    else
    {
        cost=100+296+5.56*200+9.16*200+10.61*(user.units-500);
        l=cost-(296+5.56*200+9.16*200);
        i=296+30;
        j=200*5.56+50;
        k=200*9.16+50;
    }
cout<<"\n\n";
    cout<<"  Tariff Stats    Fixed charge    Energy Charge INR/unit    Cost"<<endl;
    cout<<"      0-100            30                  2.96             "<<i<<endl;
    cout<<"     101-300           50                  5.56             "<<j<<endl;
    cout<<"     301-500           50                  9.16             "<<k<<endl;
    cout<<"    above 500          100                 10.61            "<<l<<endl;
   cout<<"\n\tAmount payable : INR "<<cost<<endl;
}
else
{

  cout<<"\n\tUsername: "<<user.name<<endl;
    cout<<"\n\tCustomer ID: "<<user.customerid<<endl;
    cout<<"\n\tUnits consumed: "<<user.units<<"KWH"<<endl;
    cout<<"\nADDRESS:";

cout<<"\n\tStreet:"<<20+i<<" , Maheshwar Niwas, Tilak Rd, Santacruz (west)";
cout<<"\n\tCity: Mumbai";
cout<<"\n\tState: Maharashtra";
cout<<"\n\tZip Code:"<<400055+2*i;
cout<<"\n\tPhone Number:"<<222205313+2*i;
cout<<"\n\tEmail:"<<email1<<email2<<email3<<"@gmail.com";float cost,i=0,j=0,k=0,l=0;
//logic for operation works here

    if(user.units<101)
    {
        cost=30+2.96*user.units;
        i=cost;
    }
    else if(user.units<300)
    {
        cost=50+296+5.56*(user.units-100);
        j=cost-296;
        i=296+30;
    }
    else if(user.units<501)
    {
        cost=50+296+5.56*200+9.16*(user.units-300);
        k=cost-(296+5.56*200);
        i=296+30;
        j=200*5.56+50;
    }
    else
    {
        cost=100+296+5.56*200+9.16*200+10.61*(user.units-500);
        l=cost-(296+5.56*200+9.16*200);
        i=296+30;
        j=200*5.56+50;
        k=200*9.16+50;
    }
cout<<"\n\n";
    cout<<"  Tariff Stats    Fixed charge    Energy Charge INR/unit    Cost"<<endl;
    cout<<"      0-100            40                  1.96             "<<i<<endl;
    cout<<"     101-300           60                  4.56             "<<j<<endl;
    cout<<"     301-500           70                  4.16             "<<k<<endl;
    cout<<"    above 500          100                 12.61            "<<l<<endl;
   cout<<"\n\tAmount payable : INR "<<cost<<endl;

}






getch();
system("cls");
l++;
if(l==n)
{
exitdisplay();
}
   }}

};

void mainmenu();
void display();




void screendisplay()
{

string hello = "\t\t\t\t\tWelcome to DSD corporation  \n\t\t\t\t\tWe are happy to assist you:)\n";
int x=0;
while ( hello[x] != '\0')
{
	cout << hello[x];
	Sleep(50);
	x++;
};

cout<<"Press any key to continue...."<<endl;

getch();
system("cls");
	}

int main()
{ time();
    screendisplay();

mainmenu();
userdatacal object2_0;
object2_0.exitdisplay();
}





int choice;
bool cinfail;
int confirmation;
string username, password, password2;

void writetofile(string username){
    ofstream writefile;
    string file = username+".txt";
    writefile.open(file.c_str());
    writefile << password;
    writefile.close();
    mainmenu(); }
    void loading();

void login(){
    system("cls");
         userdatacal object3;
          string pass ="";
          string username;
          cout<<"\n\n\n\n\t\t\t\tUsername: ";
          cin>>username;
   char ch;
   cout << "\t\t\t\tPassword: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
loading();
system("cls");
system("cls");
   if(pass == "deepisgreat")
     {


     int userunits;
system("cls");

cout<<"\n\tUsername: Deep Rahul Shah "<<endl;
    cout<<"\n\tCustomer ID:9119 "<<endl;
    cout<<"\n\tUnits consumed: 2000 "<<"KWH"<<endl;
    userunits=2000;
    cout<<"\nADDRESS:";

cout<<"\n\tStreet:"<<"20 , Maheshwar Niwas, Tilak Rd, Santacruz (west)";
cout<<"\n\tCity: Mumbai";
cout<<"\n\tState: Maharashtra";
cout<<"\n\tZip Code:"<<400091;
cout<<"\n\tPhone Number:"<<9189021028;
cout<<"\n\tEmail: deep_admin@gmail.com\n\n";
float cost,i=0,j=0,k=0,l=0;
//logic for operation works here
    if(userunits<101)
    {
        cost=30+2.96*userunits;
        i=cost;
    }
    else if(userunits<300)
    {
        cost=50+296+5.56*(userunits-100);
        j=cost-296;
        i=296+30;
    }
    else if(userunits<501)
    {
        cost=50+296+5.56*200+9.16*(userunits-300);
        k=cost-(296+5.56*200);
        i=296+30;
        j=200*5.56+50;
    }
    else
    {
        cost=100+296+5.56*200+9.16*200+10.61*(userunits-500);
        l=cost-(296+5.56*200+9.16*200);
        i=296+30;
        j=200*5.56+50;
        k=200*9.16+50;
    }

    cout<<"  Tariff Stats    Fixed charge    Energy Charge INR/unit    Cost"<<endl;
    cout<<"      0-100            30                  2.96             "<<i<<endl;
    cout<<"     101-300           50                  5.56             "<<j<<endl;
    cout<<"     301-500           50                  9.16             "<<k<<endl;
    cout<<"    above 500          100                 10.61            "<<l<<endl;
   cout<<"\n\tAmount payable : INR "<<cost<<endl;


cout<<"\n\n\nPress any key to go back to the main menu";
getch();
system("cls");
mainmenu();
     }
     else
     {cout<<"Wrong password,try again:(";
         login();
     }}





void registerpassword()
{
    userdatacal object4;
    cout << "Please enter the password:";
    cin >> password;
    cout << "Please re-enter your password:";
    cin >> password2;
    if (password == password2){
        cin.clear();
        cout<<"You have been successfully registered";
        cout<<"\n\nYou have been logged in";
        cin.ignore(10000,'\n');

        object4.userdata1();
    }
    else;{
        cout << "Sorry invalid" << endl;
        registerpassword();
    }}


void registerme(){
    userdatacal object2;
    char confirmation;
    cout << "Please enter your username: ";
    getline(cin, username);
    cout << "\nUsername -  \""<< username << "\"\nConfirm? \n\nY-Yes\nN-No" << endl;
    cin >> confirmation;
    if (confirmation == 89||confirmation==121)
        {
        registerpassword();
         }

    else; {
        cout << "Sorry invalid input, Please try again" << endl;
        cin.clear();
        cin.ignore(10000,'\n');
        registerme();
        system("cls");

        object2.userdata1();
    }}


void exit(){
    system("cls");


cout<<"\nAre you sure you want exit";
cout<<"\nY-Yes   N-No\n";

char val;
cin>>val;
system("cls");
if(val==78||val==110)
{
    mainmenu();
}
else{
    system("cls");

string bye = "Thank you:)";
int x=0;
while ( bye[x] != '\0')
{
	cout << bye[x];
	Sleep(100);
	x++;
};
getch();
system("cls");

exit(0);

}

    exit(0);}


void mainmenu(){
    userdatacal object3;
    cout << "Hello, Would you like to log in or register\n[1] Login\n[2] Register\n[3] Exit" <<endl; cin >> choice; do{
    cinfail = cin.fail();
    cin.clear();
    cin.ignore(10000,'\n');

    }while(cinfail == true);{
        switch(choice){
            case 1:
                login();

                break;

            case 2:
                registerme();
                object3.userdata1();
                break;

            case 3:
                exit();}}}
void loading()
{



 system("color 07");
 cout<<"\n\n\n\t\t\t\tPlease wait while we are loading\n\n";
 char a=177, b=219;
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 cout<<a;
 cout<<"\r";
 cout<<"\t\t\t\t";
 for (int i=0;i<=15;i++)
 {
  cout<<b;
  for (int j=0;j<=1e8;j++);

 }
system("cls");
}





