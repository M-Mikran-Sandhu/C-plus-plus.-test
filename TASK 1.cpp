#include<iostream>
using namespace std;
int main()
{
	cout<<"-------------------\n";
	cout<<"A\t"<<"B\t"<<"C\t"<<endl;
	cout<<"-------------------\n";
	
	int a,b,c;
	a=1;
	b=5;
	
	while(a<=5)
	{
		cout<<a<<"\t"<<b<<"\t"<<b*b<<"\n";
		a++;
		b--;
	}
	cout<<"-------------------\n";
}
