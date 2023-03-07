#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[5]={12,34,56,78,32};
	int i, search;
	bool found;
	cout<<"Enter a number to search : ";
	cin>>search;
	for(i=0;i<5;i++)
	{
		if(search==arr[i])
		{
			found=true;
			cout<<"the number is present";
			break;
		}
		else
		{
		found=false;
	
		}
	}
	if(found==false)
	{
		cout<<"the value is not present";
	}
	return 0;
}
