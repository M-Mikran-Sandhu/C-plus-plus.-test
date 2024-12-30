#include<iostream>
using namespace std;
int main()
{
    int a=10000,b,c,f=123;
char e;
cout<<"\t\t\t\tATM\n";
for(int d=3;d>=1;d--){
    cout<<"Enter Password (Remaining Attempts :"<<d<<")";
    cin>>b;
    if(b==f){
        cout<<"Welcome! ·\nPress A to withdraw money and Press B to check balance :";
        cin>>e;
        switch(e){
             case 'A':
             {
                 label:
            cout<<"Enter amount to be withdrawn :";
            cin>>c;
            if(a<c){
                cout<<"Insufficient Balance ";
                goto label;
            }
            else
            cout<<"Withdrawn Successfully !\nRemaining Balance is ="<<a-c;
            break;
            }
            case 'B':
            {
                cout<<"Remaining Balance is ="<<a-c;
                break;
            }
            }
        break;}
        else
        cout<<"Wrong Password.Try Again!";
    
    }
    return 0;
}
