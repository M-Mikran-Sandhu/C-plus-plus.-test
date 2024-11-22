#include<iostream>
using namespace std;

string name(string &n ,string &m){
	string temp;
	
	temp=n;
	n=m;
	m=temp;
	
	cout<<n;
	
	cout<<m<<endl;
 
	return 0;
 
}
int main(){
	int tpm;
	string nam1, nam2;
	
	cout<<"Enter first name:";
	
	cin>>nam1;
	
	cout<<"ENTER second number:";
	
	cin>>nam2;
	
	cout<<nam1;
	
	cout<<nam2<<endl;
		
	
	name(nam1,nam2);
	
	
	return 0;
}
