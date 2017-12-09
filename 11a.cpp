#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	float a,b;
	cout<<"enter a,b\n";
	cin>>a>>b;
	try
	{
		if(b!=0)
		{
			printf("result is %f\n",float(a/b));
		}
		else
			throw(b);
	}
	catch(float)
	{
		cout<<"division not possible\n";
	}
	int arr[20], n=0,i=0;
	cout<<"enter size of array, size<20\n";
	cin>>n;
	cout<<"enter elements\n";
	for(i=0;i<n;i++)
		cin>>arr[i];
	cout<<"enter position to see the element\n";
	cin>>i;
	try
	{
		if(i>=1 && i<=n)
		{
			cout<<arr[i-1];
		}
		else
			throw i;
	}
	catch(int)
	{
		cout<<"out of bound exception\n";
	}
	return 0;
	
}
