#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<fstream>
using namespace std;
class hos                   //last output window mai nam or vo sb dlna hai
{public:
 char doc_type[50];
 int a,r,b,c,room;
 char name[50],namep[50],phno[50],add[50];
 char ch1[50];
 void pt_id();          //done
 void tomeet();         //done
 void phy_name(int);    //done
 void rooms();          //done
 void bill();           //done
 void doc_fee();        //done
 void phy_timing();     //done
 void book();           //done
 void show_booking();   //done
 void Mainmenu();       //done
 void Entry();          //done
}H;
void intro()
{
 textcolor(WHITE);
 textbackground(LIGHTGREEN);
 gotoxy(25,1);
cprintf("   Computer Science Project   ");
 textcolor(YELLOW);
 cout<<"\n\n";
cprintf("                                                                                ");
cprintf("                                                                                ");
cprintf("                                  H            H                                ");
cprintf("                                O                O                              ");
cprintf("                              S                    S                            ");
cprintf("                            P                        P                          ");
cprintf("                          I                            I                        ");
cprintf("                        T                                T                      ");
cprintf("                      A                                    A                    ");
cprintf("                    L                                        L                  ");
cprintf("                    M                                        M                  ");
cprintf("                      A                                    A                    ");
cprintf("                        N                                N                      ");
cprintf("                          A                            A                        ");
cprintf("                            G                        G                          ");
cprintf("                               E                   E                            ");
cprintf("                                 M              M                               ");
cprintf("                                   E          E                                 ");
cprintf("                                     N      N                                   ");
cprintf("                                       T  T                                     ");
cprintf("                                                                                ");
cprintf("                                                                                ");
gotoxy(33,12);
cprintf("HOSPITAL MANAGEMENT");
 gotoxy(65,18);
 textcolor(BLACK);
cprintf("1.SHIPRA CHAUHAN");
 gotoxy(65,20);
cprintf("2.ARUSHI JAIN");
 gotoxy(65,22);
cprintf("3.SAVITA MEENA");
 gotoxy(65,24);
cprintf("4.TWINKLE");
 gotoxy(35,24);
 textcolor(RED+BLINK);
 cprintf("PRESS ANY KEY");
 textcolor(WHITE);
}
void hos::Mainmenu()
{  textcolor(WHITE);
   textbackground(LIGHTRED);
   gotoxy(30,2);
cprintf("CITY HOSPITAL");
    textcolor(YELLOW);
    textbackground(WHITE);
cout<<"\n\n\n\n";
cprintf("          1.Entry                                                               ");
cprintf("                                                                                ");
cprintf("                                                                                ");
cprintf("          2.Phycian timing                                                      ");
cprintf("                                                                                ");
cprintf("                                                                                ");
cprintf("          3.Appointment                                                         ");
cprintf("                                                                                ");
cprintf("                                                                                ");
cprintf("          4.See Appoinment                                                      ");
cprintf("                                                                                ");
cprintf("                                                                                ");
cprintf("          5.EXIT                                                                ");
cprintf("                                                                                ");
cprintf("                                                                                ");
cprintf("          Enter ur choice:                                                      ");
  cin>>c;
  switch(c)
  {case 1:Entry();
     break;
   case 2:phy_timing();
     break;
   case 3:book();
     break;
   case 4:show_booking();
     break;
   case 5:exit(0);
     break;
   default:cout<<"Invalid Choice";
  }
}

void hos::bill()
{  getch();
   clrscr();
   textcolor(WHITE);
   textbackground(LIGHTRED);
   gotoxy(30,2);
cprintf("CITY HOSPITAL");
cout<<"\n";
cprintf("********************************************************************************");
   cout<<"\n";
   textcolor(WHITE);
   textbackground(BLACK);
   H.doc_fee();

}

void hos::Entry()
{   clrscr();
   textcolor(WHITE);
   textbackground(LIGHTRED);
   gotoxy(30,2);
cprintf("CITY HOSPITAL");
cout<<"\n";
cprintf("********************************************************************************");
   pt_id();
   tomeet();
   bill();
}
void hos::pt_id()
{clrscr();
 gotoxy(30,2);
cprintf("CITY HOSPITAL");
cout<<"\n";
cprintf("********************************************************************************");
 gotoxy(15,4);
 cprintf("Enter ur name:");
 gets(name);
 gotoxy(15,6);
 cprintf("Enter ur ph no:");
 gets(phno);
 gotoxy(15,8);
 cprintf("Enter ur adress:");
 gets(add);
}
void hos::tomeet()
{  clrscr();
   gotoxy(30,2);
cprintf("CITY HOSPITAL");
cout<<"\n";
cprintf("********************************************************************************");
   textcolor(YELLOW);
   textbackground(WHITE);
   gotoxy(1,4);
cprintf("              Which type of doctor you want to meet:                            ");
textcolor(WHITE);
textbackground(RED);
cprintf("1.psychiatrist");
cprintf("                                                                                ");
cprintf("                                                                                ");
cprintf("2.physiotherapist");
cprintf("                                                                                ");
cprintf("                                                                                ");
cprintf("3.gynacologist");
cprintf("                                                                                ");
cprintf("                                                                                ");
cprintf("4.pediatrition");
cprintf("                                                                                ");
cprintf("                       Enter ur choice:                                         ");
 cin>>a;
if(a==1)
{strcpy(doc_type,"psychiatrist");
}
else if(a==2)
  {strcpy(doc_type,"physiotherapist");
  }
  else if(a==3)
  {strcpy(doc_type,"gynacologist");
  }
   else if(a==4)
   {strcpy(doc_type,"pediatrition");
   }
   else{
	cout<<"invalid choice";
       }
 phy_name(a);

}
void hos::phy_name(int)
{   clrscr();
    gotoxy(30,2);
cprintf("CITY HOSPITAL");
cout<<"\n";
cprintf("********************************************************************************");
    if(a==1)
   {gotoxy(15,6);
    cprintf("1. dr P.K.Sharma");
    gotoxy(15,8);
    cprintf("2. dr R.D.Mishra");
cout<<endl;
cprintf("________________________________________________________________________________");
cprintf("      Enter Your Choice         ");  cin>>b;
	if(b==1)
	 {strcpy(ch1,"dr P.K.Sharma");       //isko bad mai namep mai store karna hai
	 }else{strcpy(ch1,"dr R.D.Mishra");
	      }
   }else if(a==2)
	 { gotoxy(15,6);
	   cprintf("1.dr Rajendra Gupta");
	   gotoxy(15,8);
	   cprintf("2.dr N.K Arora");
cout<<endl;
cprintf("________________________________________________________________________________");
cprintf("      Enter Your Choice         ");  cin>>b;
	   if(b==1)
	   { strcpy(ch1,"dr Rajendra Gupta");
	   }else{strcpy(ch1,"dr N.K.Arora");
		}
	 }else if(a==3)
	       {gotoxy(15,6);
	       cprintf("1.dr. Manish Arya");
	       gotoxy(15,8);
	       cprintf("2.dr R.S.Tomar");
cout<<endl;
cprintf("________________________________________________________________________________");
cprintf("      Enter Your Choice         ");  cin>>b;
		cin>>b;
		if(b==1)
		 {
		  strcpy(ch1,"dr Manish Arya");
		 }
		 else { strcpy(ch1,"dr R S Tomar");
		      }
	       }
		else if(a==4)
		      {  gotoxy(15,6);
		      cprintf("1.dr Mohit Jain");cout<<"\n";
			gotoxy(15,8);
		      cprintf("2.dr Satish Singh");
cout<<endl;
cprintf("________________________________________________________________________________");
cprintf("      Enter Your Choice         ");cin>>b;
		if(b==1)
			  { strcpy(ch1,"dr Mohit Jain");
			  }else{
				strcpy(ch1,"dr Satish Singh");
			       }
		      } else
			{
			 cprintf("Invalid choice");
			}
}
void hos::phy_timing()
{  clrscr();
   textcolor(WHITE);
   textbackground(LIGHTRED);
   gotoxy(30,2);
cprintf("CITY HOSPITAL");
cout<<endl;
cprintf("________________________________________________________________________________");
	textcolor(BLACK);
	textbackground(LIGHTRED);
cprintf("                                                                                ");
cprintf("                    ++ Enter which type of doc u want to meet:                  ");
cprintf("                                                                                ");
//gotoxy(15,6);
cprintf("          1.psychatrist                                                         ");
cprintf("                                                                                ");
//gotoxy(15,8);
cprintf("                                                                                ");
cprintf("               2.phisiotheprist                                                 ");
cprintf("                                                                                ");
//gotoxy(15,10);
cprintf("                                                                                ");
cprintf("                    3.gynacologist                                              ");
cprintf("                                                                                ");
//gotoxy(15,12);
cprintf("                                                                                ");
cprintf("                         4.pediatrition                                         ");
cprintf("                                                                                ");
cprintf("                       Enter ur choice:                                         ");
cin>>a;
cout<<endl;
 if(a==1)
  {
cprintf("                       Your Doc's Timing is 9:00 To 11:00                       ");
  }else if(a==2)
	 {
cprintf("                       Your Doc's Timing is 11:30 To 14:00                      ");
	 }else if(a==3)
	       {
cprintf("                       Your Doc's Timing is 14:30 To 16:30                      ");
	       } else if(a==4)
		      {
cprintf("                       Your Doc's Timing is 12:00 To 18:30                      ");
		      }
		       else
		       {cprintf("Invalid Choice");
			}
cout<<endl;
cprintf("________________________________________________________________________________");
}
void hos::rooms()
{ textcolor(WHITE);
  textbackground(RED);
 if(a==1)
  {
   if(b==1)
    {gotoxy(20,12); cprintf("Your doctor's room no.21....");
      r=21;}
    else {gotoxy(20,12);cprintf("Your doctor's room no. 22....");
	  r=22;}
  }
   else if(a==2)
	 {
	    if(b==1)
	      {gotoxy(20,12); cprintf("Your doctor's room no.23....");
		r=23;
	      }
	    else {gotoxy(20,12);cprintf("Your doctor's room no. 24....");
		   r=24;}
    }
      else if (a==3)
      {
       if(b==1)
	{ gotoxy(20,12);
	  cprintf("Your doctor's room no.25....");
	  r=25;}
	else {gotoxy(20,12);
	      cprintf("Your doctor's room no.26....");
	      r=26;}
      }
      else if(a==4)
	  {
	  if(b==1)
	   { gotoxy(20,12);
	    cprintf("Your doctor's room no.27....");
		 r=27;
	   }
	   else {gotoxy(20,12);
		 cprintf("Your doctor's room no.28....");
		 r=28;}
	  }
}
void hos::doc_fee()
{ textcolor(WHITE);
  textbackground(RED);
  cout<<"\n\n\n";
 if(a==1)
    {
    gotoxy(20,10);
cprintf("Your doctor is: ");
cprintf(doc_type);
cprintf(" :: ");
cprintf(ch1);
cout<<endl;
rooms();
cout<<endl;
cprintf("                                                                                ");
gotoxy(20,14);
cprintf("This is the fee for your doctor: Rs 500");
    }else  if(a==2)
    {      gotoxy(20,10);
cprintf("Your doctor is: ");
cprintf(doc_type);
cprintf(" :: ");
cprintf(ch1);cout<<endl;
rooms();
cout<<endl;
cprintf("                                                                                ");
gotoxy(20,14);
cprintf("This is the fee for your doctor: Rs 300");
    }else if(a==3)
    {    gotoxy(20,10);
cprintf("Your doctor is: ");
cprintf(doc_type);
cprintf(" :: ");
cprintf(ch1);cout<<endl;
rooms();
cout<<endl;
cprintf("                                                                                ");
gotoxy(20,14);
cprintf("This is the fee for your doctor: Rs 400");
    }else  if(a==4)
    {    gotoxy(20,10);
cprintf("Your doctor is:");
cprintf(doc_type);
cprintf(" :: ");
cprintf(ch1);cout<<endl;
rooms();
cout<<endl;
cprintf("                                                                                ");
gotoxy(20,14);
cprintf("This is the fee for your doctor: Rs 700");
    } else
    {cout<<"Invalid choice";}
}
void hos::book()
{ clrscr();
  pt_id();
  phy_name(a);
  phy_timing();
  ofstream  fout;
  fout.open("HOSP.dat",ios::binary|ios::app);
  fout.write((char*)&H,sizeof(H));
  fout.close();
}
void hos::show_booking()
{ clrscr();
  char c[25];
  ifstream fin;
  fin.open("HOSP.dat",ios::binary|ios::app);
  while(1)
   {if(fin.eof())
      {fin.read((char*)&H,sizeof(H));
      }
     else
     {fin.read((char*)&H,sizeof(H));
cprintf("Enter Phone number to be searched for:");
gets(c);
if(c==phno)
{
cprintf("Your appoinment has been fixed\n");
cout<<"\n";gotoxy(1,6);
cprintf("********************************************************************************");
       gotoxy(23,7);
      cprintf("1.");
      gotoxy(25,7);
      cprintf(name);
      gotoxy(23,9);
      cprintf("2.");
      gotoxy(25,9);
      cprintf(phno);
      gotoxy(23,11);
      cprintf("3.");
      gotoxy(25,11);
      cprintf(ch1);
cout<<"\n";
cprintf("********************************************************************************");
}
break;

     }
   }
  fin.close();
}
void main()
{clrscr();
 intro();
 getch();
 char ch='Y';
 while(ch=='Y'||ch=='y')
 {clrscr();
  H.Mainmenu();
  cout<<endl;
  gotoxy(5,25);
cprintf("Do u want to enter another choice(Y/N)");
  cin>>ch;
 }
 getch();
}
