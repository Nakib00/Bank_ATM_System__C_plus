#include<iostream>
using namespace std;

void display(){
    cout<<"***********Manue***********"<<endl;
    cout<<"1.Blance"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"***************************"<<endl;
}

int main(){

display();

int option;
double blance=1000;

while(option != 4){

cout<<"Option: ";
cin>>option;

if(option == 1){
    cout<<"Your blance is :"<<blance<<"$"<<endl;
}else if (option == 2)
{
    double deposit;
    cout<<"Deposit amount :";
    cin>>deposit;
    blance= blance + deposit; 
}else if (option == 3)
{
    double withdraw;
    cout<<"Withdraw amount :";
    cin>>withdraw;

    if(blance >= withdraw){
        blance = blance - withdraw;
    }else{
        cout<<"You not have enough money"<<endl;
    }
}
}

cout<<"Thanks for banking with us";

return 0;
}