#include<iostream>
using namespace std;
int main()
{
    int balance=50000,deposit,withdraw,option;
    cout<<"Input option: (1) Deposit  (2) Withdraw  (3) Check balance  (4) Exit"<<endl;
    cin>>option;
    switch(option)
    {
        case 1:
        cout<<"Input deposit amount: ";
        cin>>deposit;
        balance=balance+deposit;
        break;
        case 2:
        cout<<"Enter withdrawal amount: ";
        cin>>withdraw;
        if(withdraw>balance){
        cout<<"Insufficient balance";}
        balance=balance-withdraw;
        break;
        case 3:
        cout<<"Current balance: "<<balance;
        break;
        case 4:
        cout<<"Goodbye";
        default:
        cout<<"Invalid option";
        break;
    }
}
