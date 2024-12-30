#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	system("color 2");
	int n,r;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	for(r=1;r<=10;r++){
		cout<<n<<"x"<<r<<"="<<n*r<<endl;
		
	}
		
}
