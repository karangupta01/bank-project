#include<iostream>
using namespace std;
class BankAcc{
      string name;
      string Acctype;
      int Accno;
     float Bal;
public:
     BankAcc(string nm, int An, string acctype, float balance){
             name=nm;
             Acctype=acctype;
              Accno=An;
              Bal=balance;
   }
   void deposit();
   void withdraw();
   void display();
   };
   void BankAcc::deposit(){
     int d_amt;
     cout<<"Your account balance is Rs."<<Bal<<endl;
     cout<<"Enter the amount to be deposited "<<endl;
      cin>>d_amt;
      Bal=Bal+d_amt;
      cout<<"Amount of Rs."<<d_amt<<"is deposited successfully in your account:"<<endl;
       cout<<"Now your account balance is Rs."<<Bal<<endl;
   }
   void BankAcc::withdraw(){
   int w_amt;
   cout<<"Your account balance is Rs."<<Bal<<endl;
   cout<<"Enter the amount to be withdrawn"<<endl;
   cin>>w_amt;
   if(Bal>=w_amt){
    Bal=Bal-w_amt;
    cout<<"Account of Rs."<<w_amt<<"has been withdrawn from your account "<<endl;
    cout<<"Now your account balance is Rs."<<Bal<<endl;
   }
   else
    cout<<"Insufficient Balance!!!!"<<endl;
   }

   void BankAcc::display(){
   cout<<"Your Account details are as follows :"<<endl;
   cout<<"Account Number="<<Accno<<endl;
   cout<<"name="<<name<<endl;
   cout<<"Account type="<<Acctype<<endl;
   cout<<"Balance="<<Bal<<endl;
   }
   int main(){
    string Name,AccType;
    int AccNo;
    float Balance;
     int ch=1;
     cout<<"Enter your name"<<endl;
     cin>>Name;
     cout<<"Enter your Account Number"<<endl;
     cin>>AccNo;
     cout<<"Enter your account type-current /savings "<<endl;
     cin>>AccType;
     cout<<"Enter your account balance"<<endl;
     cin>>Balance;
     BankAcc client(Name,AccNo,AccType,Balance);
     while (ch<=3){
        cout<<"Enter 1 to deposit money"<<endl;
        cout<<"Enter 2 to withdraw money"<<endl;
        cout<<"Enter 3 to display"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>ch;

     switch(ch){
     case 1: client.deposit();
              break;
    case 2:client.withdraw();
           break;
    case 3: client.display();
            break;
    default: cout<<"Please enter valid choice"<<endl;
    }
    }
    return 0;
}
