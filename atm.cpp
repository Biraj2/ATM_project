#include<iostream>
using namespace std;

void showMenu(){
    cout<<"*****Menu*****"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Deposit Money "<<endl;
    cout<<"3. Withdraw Money"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"******************"<<endl<<endl;;
}


int main(){

    int option;
    double balance=5000;
    
    do{
    showMenu();
    
    
    cout<<"options: ";
    cin>>option;
    
    
    switch (option)
    {
    case 1:
        cout<<"Balance is "<<balance<<endl;
        break;
    case 2:
        cout<<"Deposit Money: ";
        double dAmount;
        cin>>dAmount;
        balance+=dAmount;
        cout<<"Updated Balance is: "<<balance<<endl<<endl;
        break;    
    case 3:
        cout<<"Withdraw Money: ";
        double wAmount;
        cin>>wAmount;
        if(wAmount<=balance){
            balance-=wAmount;
            cout<<"Remaining Balance is: "<<balance<<endl<<endl;}
        else
            cout<<"Not Enough Money"<<endl;    
        break;
    
    }
    }
    while(option!=4);
   
}
