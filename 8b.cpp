#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class matrix
{
	public:
		int m,n;
		int a[10][10];
		matrix()
		{
			cout<<"enter values of m and n for order mxn\n";
			cin>>m>>n;
		}
		void getdata()
		{	
			int i,j;
			cout<<"enter elements of matrix\n";
			for(i=0;i<m;i++)
				for(j=0;j<n;j++)
					cin>>a[i][j];
		}
		void putdata()
		{
			int i,j;
			cout<<"matrix is\n";
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cout<<a[i][j]<<"\t";
				}
				cout<<"\n";
			}
		}
		void add()
		{
			int i,j;
			for(i=0;i<m;i++)
				for(j=0;j<n;j++)
					a[i][j]+=2;
		}
};
int main()
{
	matrix x;
	x.getdata();
	x.putdata();
	x.add();
	x.putdata();
	return 0;
}
		
