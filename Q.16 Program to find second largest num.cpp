#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<" : ";
		cin>>arr[i];
		 
	}
	cout<<"The values Entered are "<<endl;

	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
		cout<<endl;
	for(int i=0;i<5;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		
	}
	cout<<"the acending order is "<<endl ;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	cout<<"the second largest num is : ";
	cout<<arr[3];
	return 0;
}
