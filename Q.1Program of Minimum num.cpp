#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter five numbers " <<endl;
	for(int i=0;i<5;i++)
	{
	cout<<" enter a  number  "<<i+1<<" : ";
	cin>>arr[i];
	}	
	int min=arr[0];
	for(int i=0;i<5;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
		cout<<arr[i]<<"\t";
	}
	cout<<"The manimum number is "<<min;
	return 0;
}
