#include<iostream>
using namespace std;
int main()
{
	system("color f2");
	int a[10];
	int min,max,loc=-1;
	for(int i=0;i<=9;i++){
		cout<<"Enter "<<i<<" value :";
		cin>>a[i];
	}
	int b;
	cout<<"Enter anumber to search :";
	cin>>b;
	for(int i=0;i<=9;i++){
		if(b==a[i]){
		loc++;
		cout<<"Your value is found at index :'"<<i<<"'"<<endl;}
	}
	if(loc==-1)
	cout<<"No index found"<<endl;
	return 0;
}
