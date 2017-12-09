#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class vector
{
	public:
		int x,y,z;
		vector()
		{
			cout<<"enter values of x,y,z\n";
			cin>>x>>y>>z;
		}
		void display()
		{
			cout<<"Vector is\n";
			cout<<"("<<x<<")i+("<<y<<")j+("<<z<<")k\n";
			return;		
		}
		void multiply(int a)
		{
			x=x*a;
			y=y*a;
			z=z*a;
			display();
			return;
		}
		
};
int main()
{
	vector v;
	v.display();
	cout<<"enter any scalar\n";
	int a;
	cin>>a;
	v.multiply(a);
	return 0;
}

