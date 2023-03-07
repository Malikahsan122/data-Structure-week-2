#include<iostream>
using namespace std;
int main()
{
	int arr[50],n;
	cout<<"Enter size of Array : ";
	cin>>n;
		cout<<"Enter element of array :"<<endl;
	for(int i=0;i<n;i++)
	{
	
		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Even Elements: ";
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		cout<<arr[i]<<" ";
	}
	cout<<endl;
		cout<<"odd Elements: ";
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		cout<<arr[i]<<" ";
	}
	return 0;
	
}
