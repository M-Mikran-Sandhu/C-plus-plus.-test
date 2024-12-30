#include<iostream>
using namespace std;
int main()
{	
	int m[10];
	for(int i=1;i<=10;i++){
		cout<<"ENTER "<<i<<" VALUE:";
		cin>>m[i];
	}
	cout<<endl;
	int t[10];
	for(int i=1;i<=10;i++){
		t[i]=m[i]*5;
	}
	for(int i=1;i<=10;i++){
		cout<<"AFTER:";
		cout<<t[i]<<"\n";
	}
}

