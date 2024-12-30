#include<iostream>
using namespace std;
int main()
{
	int m[11]={167,173,170,160,182,154,166,177,184,151,163};
	int temp;
	for(int i=0;i<=10;i++){
		cout<<m[i]<<",";
	}	
	for(int j=1;j<=10;j++){
		for(int r=0;r<=10;r++){
			if(m[r]>m[j]){
				temp=m[r];
				m[r]=m[j];
				m[j]=temp;
			}
		}
	}
	cout<"AFTER SORTING";
	for(int i=0;i<=10;i++){
		cout<<m[i]<<endl;
	}
}
