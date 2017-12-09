#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class vector
{
	public:
		int a[10];
		vector()
		{
			int i;
			cout<<"enter elements of array\n";
			for(i=0;i<10;i++)
				cin>>a[i];
		}
		int operator [](int j)
		{
			return a[j];
		}
};
int main()
{
	vector v;
	int p;
	cout<<"enter position\n";
	cin>>p;
	if(p>=1 && p<=10)
		cout<<v[p-1]<<endl;
	else
		cout<<"invalid position\n";
	return 0;
}
