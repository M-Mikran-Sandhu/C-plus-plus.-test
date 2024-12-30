#include<iostream>
using namespace std;
int main(){
	int **arr=new int*[4];
	for(int i=0;i<4;i++){
		arr[i]=new int;
	}
	int b[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){ 
			cout<<"Enter number at index "<<i<<" , "<< j <<" :";
			cin>>b[i][j];	 
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){ 
			arr[i][j]=b[i][j];
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){ 
			if(arr[i][j]%2==0){
				arr[i][j]=arr[i][j+1]+1;
			if(arr[i][j]%2!=0) 
				arr[i][j]=arr[i][j-1]-1;
			if(j!=0)
				arr[i][j]=arr[i][j+1]+1;
			if(i==2 || j==2)
				arr[i][j]=arr[0][0]+1;
			}
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){ 
			cout<<arr[i][j]<<"  ";	 
		}
		cout<<endl;
	}
}
