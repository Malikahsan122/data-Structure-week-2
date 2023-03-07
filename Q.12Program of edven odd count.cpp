#include<iostream>
using namespace std;
int main()
{
	int arr[50],n;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter element of array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int even_count=0,odd_count=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
		even_count++;	
		}
		else
		{
			odd_count++;
		}
	}
	cout<<"Count of Even Number is "<<even_count;
		cout<<"Count of odd Number is "<<odd_count;
		return 0;	
}
