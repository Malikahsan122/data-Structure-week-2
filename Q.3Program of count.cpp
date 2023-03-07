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
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
		cout<<endl; 
		}	
	int count=0;
	int num;
	cout<<"Enter num to count"<<endl;
	cin>>num;
	for(int i=0;i<5;i++)
	{
		if(num==arr[i])
		count++;
	}
	cout<<"Num is repeated  "<<count<<" time"<<endl;
  return 0;
}

