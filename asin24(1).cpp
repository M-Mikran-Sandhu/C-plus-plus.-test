#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	system("color 2");
	int sum=0;
	for(int a=1;a<=5;a++){
		cout<<a<<endl;
		sum=sum+a;
	}
	cout<<"SUM="<<sum;	
}
