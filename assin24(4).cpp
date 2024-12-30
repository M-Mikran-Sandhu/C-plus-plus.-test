#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	system("color 2");
	
	int m,k,l,o;
	cout<<"Enter a number:"<<endl;
	cin>>m;
	
	k=m%100;
	l=m/100;  //1
	o=k%10; //3
	k=k/10;  //2
	cout<<m<<"="<<l+k+o;
}
