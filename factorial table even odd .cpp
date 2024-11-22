#include<iostream>
using namespace std;

void fun(int a, int b){
	int mul=1;
	 switch(b){
	 	case 1:{
	 		for(int i=a;i>=1;i--)
	 			mul=mul*i;
	 			
			 
			 cout<<mul;
			break;
		 }
		 case 2:{
		 	for(int i=0;i<=10; i++){
		 		cout<<i<<"x"<<a<<"="<<i*a<<endl;
			 }
		 	
			break;
		 }
		 
		case 3:{
			if(a/2==1){
				cout<<"Odd number";
			}else if(a/2==0){
				cout<<"Even number";
			}
			break;
		}
		default :{
			cout<<"error";
			break;
		}
	 }
 
}
int main(){
 	
	int n,s;
	
	cout<<"Enter Number:";
	
	cin>>n;
	
	cout<<"Press 1 for factorial"<<endl;
	
	cout<<"Press 2 for table"<<endl;
	
	cout<<"Press 3 for even/odd"<<endl;
	
	cin>>s;
	
	
	fun(n,s);

 	
 	
	return 0;
}
