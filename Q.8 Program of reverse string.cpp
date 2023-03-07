#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[50],size;
	cout<<"Enter size of array : ";
	cin>>size;
	cout<<endl;
	for(int i=0;i<size;i++)
	{
	cout<<" enter a  number  "<<i+1<<" : ";
	cin>>arr[i];
	}	
	{
	cout<<"the Reverse of array is : ";
	for(int i=size-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	
	}
	
}
	return 0;
}

	
	

