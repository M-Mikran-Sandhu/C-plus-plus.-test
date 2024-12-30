#include<iostream>
using namespace std;
int main(){
	int a,b,sum;
	cout<<"Enter a number :";
	cin>>a;
	for(;a!=0;){
		b=a%10;
		if(b==0){
			sum=sum+a;
		}
		else
		sum=sum+b;
		a=a/10;
	}
	cout<<"Sum ="<<sum;
	return 0;
}
