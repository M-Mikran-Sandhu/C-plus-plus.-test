#include<iostream>
using namespace std;

void evod(int a){
	if (a==0){
		cout<<"Zero";
		
	}else if(a%2==0){
		cout<<"EVEN";
	}else{
		cout<<"ODD";
	}
}
int main(){
	int num;
	
	cout<<"Enter a Number:";
	
	cin>>num;
	 
	evod(num);
}
