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
	for(int i=9;i>=0;i--){
		cout<<"Reversed Values of arrays are :"<<a[i]<<endl;
	}
	min=a[0];
	max=a[0];
	for(int i=1;i<=9;i++){
		if(min>a[i])
		min=a[i];
		if(max<a[i])
		max=a[i];
	}
	int b;
	cout<<"Enter anumber to search :";
	cin>>b;
	for(int i=0;i<=9;i++){
		if(b==a[i]){
		loc++;
		cout<<"Your value is in :'"<<i<<"' index"<<endl;}
	}
	if(loc==-1)
	cout<<"No index found"<<endl;
	cout<<"maximum number is ="<<max<<endl;
	cout<<"minimum number is ="<<min;
	return 0;
}
