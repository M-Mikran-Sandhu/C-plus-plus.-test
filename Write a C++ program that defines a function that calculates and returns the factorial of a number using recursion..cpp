#include<iostream>
using namespace std;

int fac(int a){
	int mul=1;
	
	for(int i=a;i>=1;i--){
	 	mul=mul*i;
	}
	return mul;
}
int main(){
	int num;
	
	cout<<"Enter Number:";
	cin>>num;
	
	cout<<"Factorial="<<fac(num);
	
	return 0;
}
