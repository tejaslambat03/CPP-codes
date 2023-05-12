#include <iostream>
using namespace std;

int main() 
    {
    int balance= 10000, num, withdraw,deposit;
    char ch='n';
    do 
    {    cout<<"Select option from following:"<<endl;
         cout<<"1.Withdrawal"<<endl;
        cout<<"2.Deposit"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter the number: "<<endl;
        cin>>num;
        if(num==1)
        {    
        cout<<"Enter the amount to withdraw: ";
        cin>>withdraw;
        balance= balance - withdraw;
        cout<<"Cash withdrawal successful"<<endl;
        cout<<"Your balance is "<<balance<<" Rs.";
        }
        else if (num==2)
        {    
        cout<<"Enter the amount to deposit: ";
        cin>>deposit;
        balance= balance + deposit;
        cout<<"Cash deposited successful"<<endl;
        cout<<"Your balance is "<<balance<<" Rs.";
        }
        else
        {
        cout <<" Are you sure you want to exit?(Y/N)"<<endl;
        cin>>ch;
        }
        }while(ch!='Y' || ch!= 'y');
       
        return 0;
    }