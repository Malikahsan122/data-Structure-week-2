#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter values "<<endl;
	for(int i;i<5;i++)
	{
		cout<<"the values are "<<i+1<<" : ";
		cin>>arr[i];
	}
		for(int i;i<5;i++)
		{
		
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	cout<<"the list of odd num is :";
		for(int i;i<5;i++){
			if(arr[i]%2!=0)
			{
				cout<<arr[i]<<"\t";
			}
		}
		return 0;
	}
