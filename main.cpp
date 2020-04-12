#include <iostream>
#include <cmath>
#include <string>

using namespace std;
class carcompany{
 public:
     int Maccount=0;
     int Caccount;
      char choice ;
     Racingcars(){
      int ferari=300000, bugatti=1000000, lambergini=800000;
      int Fnum, Bnum, Lnum;
      int Ftotalp ,Btotalp, Ltotalp;

      cout<<"FERARI(a)       BUGATTI(b)       LAMBERGINI(c)"<<endl;
      cout<<"Price:300,000$   Price:1,000,000$   Price:800,000$"<<endl;
      cout<<"which one do you want:"<<endl;
      cin>>choice;
       if(choice=='a'){
        cout<<"how many feraris do you want:"<<endl;
        cin>>Fnum;
        Ftotalp = Fnum *  ferari;
        cout<<"the total price will be "<<Ftotalp<<"$"<<endl;
        cout<<"did you agree to buy or not?y/n"<<endl;
        cin>>choice;
        if(choice=='y'){
            cout<<"then enter how much balance is there in your account:";
            cin>>Caccount;
            if(Caccount<ferari)
                cout<<"Sorry you can't make the deal, you have less money in your account"<<endl;
            if(Caccount>=ferari){
            Caccount = Caccount-Ftotalp;
            Maccount = Maccount+Ftotalp;
            cout<<"Now there is "<<Caccount<<"$ in your account"<<endl;
            cout<<"thank you very much for using our service..."<<endl;
         }
        }
       }
       if(choice=='b'){
        cout<<"how many bugatti's do you want:"<<endl;
        cin>>Bnum;
        Btotalp = Bnum *  bugatti;
        cout<<"the total price will be "<<Btotalp<<"$"<<endl;
        cout<<"did you agree to buy or not?y/n"<<endl;
        cin>>choice;
        if(choice=='y'){
            cout<<"then enter how much balance is there in your account:";
            cin>>Caccount;
            if(Caccount<bugatti)
                cout<<"Sorry you can't make the deal, you have less money in your account"<<endl;
            if(Caccount>=bugatti){
            Caccount = Caccount-Btotalp;
            Maccount = Maccount+Btotalp;
            cout<<"Now there is "<<Caccount<<"$ in your account"<<endl;
            cout<<"thank you very much for using our service..."<<endl;
         }
         }
      }
      if(choice=='c'){
        cout<<"how many lambergini's do you want:"<<endl;
        cin>>Lnum;
        Ltotalp = Lnum *  lambergini;
        cout<<"the total price will be "<<Ltotalp<<"$"<<endl;
        cout<<"did you agree to buy or not?y/n"<<endl;
        cin>>choice;
        if(choice=='y'){
            cout<<"then enter how much balance is there in your account:";
            cin>>Caccount;
            if(Caccount<lambergini)
                cout<<"Sorry you can't make the deal, you have less money in your account"<<endl;
            if(Caccount>=lambergini){
            Caccount = Caccount-Ltotalp;
            Maccount = Maccount+Ltotalp;
            cout<<"Now there is "<<Caccount<<"$ in your account"<<endl;
            cout<<"thank you for making a deal with us..."<<endl;
        }
     }
      }
     }

 int  Classiccar(){
   int Shebly=800000 , Fiat=550000,  Dodge=300000;
   int Snum, Fnum, Dnum;
   int Stotalp, Ftotalp, Dtotalp;
   cout<<"SHEBLY 1900(a)   FIAT 1919(b)     DODGE 1920(c)"<<endl;
   cout<<"Price:800,000$     Price:550,000$     Price:300,000$"<<endl;
   cout<<"which one do you want:";
   cin>>choice;
   if(choice=='a'){
    cout<<"how many Shebly's do you want:";
    cin>>Snum;
    Stotalp = Snum * Shebly;
    cout<<"the total price will be"<<Stotalp<<"$"<<endl;
    cout<<"did you agree to buy or not?y/n"<<endl;
    cin>>choice;
    if(choice=='y'){
        cout<<"then enter how much balance is there in your account:";
        cin>>Caccount;
        if(Caccount<Shebly)
            cout<<"sorry you don't have enough money to make the deal"<<endl;
        else if(Caccount>=Shebly){
            Caccount = Caccount - Stotalp;
            Maccount = Maccount + Stotalp;
            cout<<"now there is "<<Caccount<<"$ in your account"<<endl;
            cout<<"thank you for making a deal with as..."<<endl;
        }
    }
   }
   if(choice=='b'){
    cout<<"how many Fiat's do you want:";
    cin>>Fnum;
    Ftotalp = Fnum * Fiat;
    cout<<"the total price will be"<<Ftotalp<<"$"<<endl;
    cout<<"did you agree to buy or not?y/n"<<endl;
    cin>>choice;
    if(choice=='y'){
        cout<<"then enter how much balance is there in your account:";
        cin>>Caccount;
        if(Caccount<Fiat)
            cout<<"sorry you don't have enough money to make a deal"<<endl;
       else if(Caccount>=Fiat){
        Caccount = Caccount - Ftotalp;
        Maccount = Maccount + Ftotalp;
        cout<<"now there is "<<Caccount<<"$ in your account"<<endl;
        cout<<"thank you for making a deal with us..."<<endl;
       }
    }
   }
   if(choice=='c'){
    cout<<"how many Dodge's do you want:";
    cin>>Dnum;
    Dtotalp = Dnum * Dodge;
    cout<<"the total price will be"<<Dtotalp<<"$"<<endl;
    cout<<"did you agree to buy or not?y/n"<<endl;
    cin>>choice;
    if(choice=='y'){
        cout<<"then enter how much balance is there in your account:";
        cin>>Caccount;
        if(Caccount<Dodge)
            cout<<"sorry you don't have enough  money to make a deal";
        if(Caccount>=Dodge){
            Caccount = Caccount - Dtotalp;
            Maccount = Maccount + Dtotalp;
            cout<<"now there is "<<Caccount<<"$ in your account"<<endl;
            cout<<"thank you for making a deal with us..."<<endl;
        }
    }
   }
 }
 int  Familycar(){
  int Honda=45000, Nissan=50000, BMW=65000;
  int Hnum, Nnum, Bnum;
  int Htotalp, Ntotalp, Btotalp;
  cout<<"HONDA XL 2016(a)  NISSAN BMX 2015(b)  BMW LX5 2018(c)"<<endl;
  cout<<"Price:45,000$  Price:50,000$    Price:65,000$"<<endl;
  cout<<"which car do you want:";
  cin>>choice;
  if(choice=='a'){
    cout<<"how many Honda's do you want:";
    cin>>Hnum;
    Htotalp = Hnum * Honda;
    cout<<"the total price will be "<<Htotalp<<"$"<<endl;
    cout<<"did you agree to buy or not?y/n"<<endl;
    cin>>choice;
    if(choice=='y'){
        cout<<"then enter how much balance is there in your account:";
        cin>>Caccount;
        if(Caccount<Honda)
            cout<<"sorry you don't have enough balance to make a deal";
        else if(Caccount>=Honda){
            Caccount = Caccount - Htotalp;
            Maccount = Maccount + Htotalp;
            cout<<"now there is "<<Caccount<<"$ in your account"<<endl;
            cout<<"thank you for making a deal with us..."<<endl;
        }
    }
  }
  if(choice=='b'){
    cout<<"how many Nissan's do you want:";
    cin>>Nnum;
    Ntotalp = Nnum * Nissan;
    cout<<"the total price will be "<<Ntotalp<<"$"<<endl;
    cout<<"did you agree to buy or not?y/n"<<endl;
    cin>>choice;
    if(choice=='y'){
        cout<<"then enter how much balance is there in your account:";
        cin>>Caccount;
        if(Caccount<Nissan)
     cout<<"sorry you don't have enough balance to make a deal";
     else if(Caccount>=Nissan){
        Caccount = Caccount - Ntotalp;
        Maccount = Maccount + Ntotalp;
        cout<<"now there is "<<Caccount<<"$ in your account"<<endl;
        cout<<"thank you for making a deal with us.."<<endl;
     }
    }
  }
  if(choice=='c'){
    cout<<"how many BMW do you want:";
    cin>>Bnum;
    Btotalp = Bnum * BMW;
    cout<<"the total price will be "<<Btotalp<<"$"<<endl;
    cout<<"did you agree to buy or not?y/n"<<endl;
    cin>>choice;
    if(choice=='y'){
        cout<<"then enter hoe much balance is there in your account:";
        cin>>Caccount;
        if(Caccount<BMW)
            cout<<"sorry you don't have enough balance to make a deal";
        else if(Caccount>=BMW){
            Caccount = Caccount - Btotalp;
            Caccount = Caccount + Btotalp;
            cout<<"now there is "<<Caccount<<"$ in your account"<<endl;
            cout<<"thank you for making a deal with us..."<<endl;
        }
    }
  }
}
};
int main()
{
char option;
char loop='y';
while(loop='y'){
cout<<"**********************WELCOME TO NIGUSSIE FAMILY CAR SELL COMPANY*********************"<<endl;
cout<<"RACING CAR(a), ClASSIC CAR(b), FAMLY CAR(c)"<<endl;
cout<<" what kind of a car do you want:";
cin>>option;
if(option=='a'){
    carcompany co;
    co.Racingcars();
}else if(option=='b'){
   carcompany co;
   co.Classiccar();
}else if(option=='c'){
   carcompany co;
   co.Familycar();
   }
cout<<"do you want to continue?y/n"<<endl;
cin>>loop;
}
}
