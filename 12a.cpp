#include<iostream>
using namespace std;
template<class t>
void bubble(t a[],int n)
{
	t temp;
	for(int i=0;i<n-1;i++)
		for(int j=n-1;j>i;j--)
			if(a[j]<a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
}
int main()
{
	int ch,n,i;
	cout<<"enter size of array\n";
	cin>>n;
	for(;;)
	{
		cout<<"enter 1 for integer\nenter 2 for double\nenter 3 to exit\n";
		cin>>ch;
		if(ch==1)
		{
			int arr[n];
			for(i=0;i<n;i++)
				cin>>arr[i];
			bubble(arr,n);
			for(i=0;i<n;i++)
				cout<<arr[i]<<"\t";
			cout<<"\n";
		}
		else if(ch==2)
		{
			double arr[n];
			for(i=0;i<n;i++)
				cin>>arr[i];
			bubble(arr,n);
			for(i=0;i<n;i++)
				cout<<arr[i]<<"\t";	
			cout<<"\n";
		}	
		else 
			break;
	}
	return 0;
}

 
