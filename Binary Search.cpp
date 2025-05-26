/*
//binary search Dessending
#include<iostream>
using namespace std;

int bs(int arr[],int size,int target){
	int low=0;
	int high=size-1;
	
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==target){
			return mid;
		}else if(arr[mid]>target){
			low=mid+1;
		}else{
			high=mid-1;
		}
		
	}
	return -1;
}
int main(){
	int arr[6];
	cout<<"Enter a Sorted Array:\n";
	for(int i=0;i<6;i++){
		cin>>arr[i];
	}
	
	int size=sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Search Number:";
	int target;
	cin>>target;
	
	int ans=bs(arr,size,target);
	
	if(ans!=-1){
		cout<<"Number Found at Index"<<ans;
	}else{
		cout<<"Number Not found!";
	}
}
*/

//binary search Accending
#include<iostream>
using namespace std;

int bs(int arr[],int size,int target){
	int low=0;
	int high=size-1;
	
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==target){
			return mid;
		}else if(arr[mid]>target){
			high=mid-1;
		}else{
			low=mid+1;
		}
		
	}
	return -1;
}
int main(){
	int arr[6];
	cout<<"Enter a Sorted Array:\n";
	for(int i=0;i<6;i++){
		cin>>arr[i];
	}
	
	int size=sizeof(arr)/sizeof(arr[0]);
	
	cout<<"Search Number:";
	int target;
	cin>>target;
	
	int ans=bs(arr,size,target);
	
	if(ans!=-1){
		cout<<"Number Found at Index: "<<ans;
	}else{
		cout<<"Number Not found!";
	}
}

