# include<iostream>
#include<conio.h>
# include<cstdlib>
#include<windows.h>
#include<fstream>
  using namespace std;
  class LIBRARY
  {
      private:
      char nm[30],add[30],c,bk[50],pb[50];
    int d,t=0,f;
    int s,p=86511;
      public:
      void welcomme_library(); // complete;
      void view_member_account();
      void add_newbook();
      void delete_book();
      void add_member();
      void deposit_book();
      void view_stock();
      void store_data();
       void  gotoxy(int x, int y)
      {
         COORD c;
         c.X=x;
         c.Y=y;
         SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
      }

  };
  void LIBRARY::store_data()
  {
      if(bk==0|pb==0)
        {
            cout<<"DATA NOT INITIALIZED";
        }
      else
      {
      ofstream fout;
      fout.open("INFOFILE.TXT",ios::app|ios::binary);
      fout.write((char*)this,sizeof(*this));
      fout.close();
      }
  }
  void LIBRARY :: welcomme_library()
  {
      char a;
      char clg[100];
      int ps;
    cout<<"\n\n\n*********************************************************************";
    cout<<"\n                  WELCOME TO MY LIBRARY"<<endl;
    cout<<"                 CONTACT NUMBER :6206657472";
    cout<<"\n                    PIN CODE  :815353"<<endl;
    cout<<"    DEVLOPER BY*******SANDEEP KUMAR RAY  (DEOGHAR,JHARKHAND)******** "<<endl<<endl;
    cout<<"   DO YOU WANT TO CREATE AN ACCOUNT(Y/N)  :";
    cin>>a;
    if(a=='Y'||a=='y')
    {
        cout<<"ENTER YOUR (COLLEGE|INSTUTE) NAME :"<<endl;
        cin.ignore();
        cin.getline(clg,100);
        cout<<"(COLLEGE|INSTUTE) PASSWORD :"<<endl;
        cin>>ps;
        cout<<"SECCUSSFULL.."<<endl<<endl<<endl<<endl;
          cout<<"\n\n\n*********************************************************************";
    cout<<"\n                  WELCOME TO MY LIBRARY"<<endl;
    cout<<"                 CONTACT NUMBER :6206657472";
    cout<<"\n                    PIN CODE  :815353"<<endl;
    cout<<"    DEVLOPER BY*******SANDEEP KUMAR RAY  (DEOGHAR,JHARKHAND)******** "<<endl<<endl;
    cout<<"    (COLLEGE|INSTUTE) NAME :"<<clg;
    }
    cout<<"\n\n ENTER LIBRARY PASSWORD  :";
    cin>>s;
    if(s==p)
    {
      for(int i=0;i<=100;i++)
      {
          gotoxy(46,12);
      cout<<"DEVLOPED->BY SANDEEP KUMAR RAY<-";
        gotoxy(50,13);
      cout<<"    LOADING...";
      cout<<i<<"%";
      Sleep(0);
      system("cls");
      }
    }
    else
    {
      cout<<"YOUR PASSWORD DO NOT MATCH PLEASE TRY AGAIN....";
      exit(EXIT_SUCCESS);
    }

  }
  void LIBRARY :: add_member()
  {
    cout<<"\n**********WELCOME TO MEMBER************";
    cout<<"\n**********ADD A NEW MEMBER*************"<<endl;
    cout<<"ENTER YOUR NAME : "<<endl;
    cin.ignore();
    cin.getline(nm,30);
    cout<<"ENTER YOUR ADDRESS  :"<<endl;
    cin.ignore();
    cin.getline(add,30);
    cout<<"ENTER YOUR CLASS  :"<<endl;
    cin>>f;
    cout<<"ENTER YOUR STUDENT ID  :"<<endl;
    cin>>d;
    cout<<"YOUR ACCOUNT ADD IS SUCCESSFULLY....."<<endl;
    t=t+1;
  }
  void LIBRARY :: view_member_account()
  {
    int n;
    cout<<"TOTAL MEMBER IS ENTERED ACCOUNT INFORMATION IS :"<<t<<endl;
    cout<<"ENTER YOUR MEMBER NUMBER :  ="<<endl;
    cin>>n;
    if(t==n)
    {
    cout<<"STUDENT NAME :"<<nm<<endl;
    cout<<"STUDENT ADDRESS :"<<add<<endl;
    cout<<"CLASS  :"<<f<<endl;
    cout<<"STUDENT ID  :"<<d<<endl;
    }
  }
  void LIBRARY :: add_newbook()
  {
    int g;
    cout<<"*************WLCOME TO ADD A NEW BOOK***************** ";
    cout<<"ENTER YOUR ID :"<<endl;
    cin>>g;
    if(d==g)
    {
      cout<<"ENTER YOUR BOOK NAME :"<<endl;
      cin.ignore();
      cin.getline(bk,50);
      cout<<"ENTER YOUR PUBLICATION :"<<endl;
      cin.ignore();
      cin.getline(pb,50);
      cout<<"ADD NEW BOOK IS SUCCESSFULL.."<<endl;
    }
    else
    {
      cout<<"YOUR ID NUMBER IS INVALID PLEASE TRY AGAIN..."<<endl;
    }
  }
  void LIBRARY :: delete_book()
  {
    int v;
    char rem[50];
    cout<<"**************WELCOME TO DELETE BOOK***************";
    cout<<"ENTER YOUR STUDENT  ID  :"<<endl;
    cin>>v;
    if(d==v)
    {
      cout<<"ENTER YOUR BOOK NAME :"<<endl;
      cin.ignore();
      cin.getline(rem,50);
      if(bk==rem)
      {
        bk==0;
      }
    }else{
      cout<<"I CANT FIND YOUR BOOK PLEASE TRY AGAIN..";
    }
  }
  void LIBRARY :: view_stock()
  {
    int l;
    cout<<"\n***************WELCOME TO VIEW STOCK****************";
    cout<<"ENTER YOUR STUDENT ID :"<<endl;
    cin>>l;
    if(d==l)
    {
      cout<<"BOOK NAME IS :"<<bk;
      cout<<"BOOK PUBLICATION IS :"<<pb;
    }
    else
    {
      cout<<"INVALID BOOK ID PLEASE TRY AGAIN..";
    }

  }
  void LIBRARY :: deposit_book()
  {
    int m;
    char dp[50];
    cout<<"**************WELCOME TO DEPOSIT BOOK*******************"<<endl;
    cout<<"ENTER YOUR STUDENT ID  :"<<endl;
    cin>>m;
    if(d==m)
    {
      cout<<"ENTER YOUR BOOK NAME  :"<<endl;
      cin.ignore();
      cin.getline(dp,50);
      if(bk==dp)
      {
         cout<<"BOOK DEPOSIT IS SUCCESSFULL..."<<endl;
      }
      else
      {
        cout<<"SORRY......"<<endl;
      }
    }

  }
  int main()
  {
    LIBRARY obj;
    int ch;
    char ans;
      obj.welcomme_library();
      obj.store_data();
      do
      {cout<<endl<<endl<<endl<<endl;
      cout<<"         ->MANU OF LIBRARY<-"<<endl<<endl;
      cout<<"         1.ADD NEW MEMBER"<<endl;//cm
      cout<<"         2.ADD NEW BOOK"<<endl;//cm
      cout<<"         3.DELETE BOOK"<<endl;//cm
      cout<<"         4.DEPOSIT BOOK"<<endl;/*not complete*/
      cout<<"         5.VIEW STOCK"<<endl;
      cout<<"         6.VIEW MEMBER ACCOUNT"<<endl<<endl<<endl;


      cout<<"ENTER YOUR CHOOICE :";
      cin>>ch;
      switch(ch)
      {
        case 1:
          obj.add_member();
          break;
          case 2:
          obj.add_newbook();
          break;
          case 3:
          obj.delete_book();
          break;
          case 4:
          obj.deposit_book();
          break;
          case 5:
          obj.view_stock();
          break;
          case 6:
          obj.view_member_account();
          break;
      }
          cout<<"DO YOU WANT TO CONTINUE..(Y/N)  :";
          cin>>ans;
    } while(ans=='y'|| ans=='Y');
    getch();
    return 0;
}
