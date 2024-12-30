#include<iostream>
using namespace std;
struct person{
	string address;
	int age;
	string name;
};
int main(){
	int n;
	cout<<"Enter number of persons:";
	cin>>n;
	
	person **data= new person*[n];
	for(int j=0;j<n;j++)
	data[i]=new person();
	
	for(int i=0;i<n;i++){
		cin>>data[i]->name;
		cin>>data[i]->age;
		cin>>data[i]->address;
	}
}
