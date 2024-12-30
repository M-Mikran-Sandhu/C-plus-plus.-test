#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	system("color 2");
	int r=0,m=1;
	cout<<"Enter a number:";
	cin>>r;
	
	for(int e=1;r>=e;e++){
		m=m*e;
		
	}
	cout<<"FICTORIAL= "<<m;
	
		
}
