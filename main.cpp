#include<iostream>
using namespace std;
void showmanue(){
    cout<<"********Manue********"<<endl;
    cout<<"1.Check blance"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"*********************"<<endl;

}
int main(){

int option;
double blance=1000;

while(option!=4){

    showmanue();

cout<<"Option: ";
cin>>option;

    if(option==1){
    cout<<"Blance is :"<<blance<<"$"<<endl; 
    }else if (option==2)
    {
    cout<<"Deposit Amount :";
    double deposit;
    cin>>deposit;
    blance+=deposit; 
    }else if (option==3)
    {
    cout<<"Withdraw Amount :";
        double withdeaw;
        cin>>withdeaw;
        
        if(withdeaw<=blance){
            blance-=withdeaw;
        }else{
            cout<<"Not enough money"<<endl;
        }
        
    } 
    
}
return 0;
}