#include<iostream>
using namespace std;


class Array{
	private:
		int arr[4];
		
		
		
	public:
		Array(){
			for(int i=0;i<4;i++){
				 
				arr[i]=-1;
				
			}
		}
		void input(){
			for(int i=0;i<4;i++){
				cout<<"Enter "<<i+1<<" Number=";
				cin>>arr[i];
				
			}
		cout<<"*******************************"<<endl;
		}
		void show(){
			for(int i=0;i<4;i++){
				cout<<"Element at "<<i+1<<" is ="<<arr[i]<<endl;
				
			}
		cout<<"*******************************"<<endl;
		}
		
	int operator ==(Array eql){
		int yes=0;
		for(int i=0;i<4;i++){
				if(arr[i]==eql.arr[i])
				yes=yes+1;
			}
			
		if(yes==4){
			return 1;
		}
		else{
		return 0;
		}
	}
};
int main(){
	Array one,two;
	one.input();
	one.show();
	two.input();
	two.show();
	
	if(one==two){
		cout<<"All elements are same.";
	}else{
	cout<<"All elements are not same.";
}
	cout<<"*******************************"<<endl;
	return 0;
}
