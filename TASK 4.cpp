 #include <iostream>
using namespace std;
int main()
{
	int array[10];
	
	cout<<"Enter 10 numbers "<<endl;
	for(int i = 0 ; i <10; i++)
	{
		cout<<"Value "<<i+1<<" : ";
		cin>>array[i];
	}
	int cE,cF=1,mF=0,mFE;
	for(int i = 0 ; i<10; i++)
	{
		cE = array[i];
		for(int j = i+1 ; j<10; j++)
		{
			if(array[j]== cE)
			{
				cF ++;
			}
			 
		}
		if(cF>mF)
		{
			mFE = cE;
			mF = cF;
		}
	}
	cout<<"The most frequent element in the array: "<<mFE;
	return 0;
}
