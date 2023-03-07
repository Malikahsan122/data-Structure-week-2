#include<iostream>
using namespace std;
int main()
{
	int arr[5],arr2[5];
	for(int i=0;i<5;i++)
	{
		cout<<"enter values"<<i+1<< " : ";
		cin>>arr[i];
	}
	cout<<"the value entered are "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<"Enter another values of array"<<j+1<<" : ";
		cin>>arr2[j];
		
	}
	cout<<"The values entered are "<<endl;
	for(int j=0;j<5;j++)
	{
		cout<<arr2[j]<<"\t";
	}
	cout<<endl;
	int count=0;
	for(int i=0;i<5;i++)
	{
		if(arr[i]!=arr2[i])
		{
			count++;
			break;
		}
	}
	if(count!=0)
	{
		cout<<"Both array are not same"<<endl;
	}
	else{
		cout<<"both array are same"<<endl;
	}
	return 0;
}
