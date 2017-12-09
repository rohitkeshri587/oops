#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class A
{
	public:
		int a;
		A()
		{
			cout<<"Enter Value of A\n";
			cin>>a;
		}
		friend class C;
};
class B
{
	public:
		int b;
		B()
		{
			cout<<"Enter Value of B\n";
			cin>>b;
		}
		friend class C;
};
class C
{
	public:
		int temp;
		void swap(A &x, B &y)
		{
			temp=x.a;
			x.a=y.b;
			y.b=temp;
			cout<<"A is "<<x.a<<endl;
			cout<<"B is "<<y.b<<endl;
			return;
		}
};
int main()
{
	A s1;
	B s2;
	C s3;
	s3.swap(s1,s2);
	return 0;
}
	

