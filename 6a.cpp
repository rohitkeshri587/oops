#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class rectangle
{
	public:
		double l,b,a,p;
		rectangle()
		{
			l=0;
			b=0;
		}
		rectangle(double x, double y)
		{
			l=x;
			b=y;
		}
		void area()
		{
			a=l*b;
			return;
		}
		void perimeter()
		{
			p=2*(l+b);
			return;
		}
		void operator +(rectangle &r2)
		{
			rectangle r3;
			r3.l=l+r2.l;
			r3.b=b+r2.b;
			cout<<"sum of objects\n";
			cout<<r3;
			return;
		}
		bool operator ==(rectangle &r2)
		{
			if(l==r2.l && b==r2.b)
				return true;
			else
				return false;
		}
		friend ostream &operator <<(ostream &dout, rectangle &r);
};
ostream &operator <<(ostream &dout, rectangle &r)
{
	dout<<"length is "<<r.l<<" breadth is "<<r.b<<endl;
	return dout;
}
int main()
{
	double l,b;
	cout<<"enter length and breadth for 1st rectangle\n";
	cin>>l>>b;
	rectangle r1(l,b);
	cout<<"enter length and breadth for 2nd rectangle\n";
	cin>>l>>b;
	rectangle r2(l,b);
	cout<<"1st rectangle\n";
	cout<<r1;
	r1.area();
	r1.perimeter();
	cout<<"area of rectangle 1 is "<<r1.a<<endl;
	cout<<"perimeter of rectangle 1 is "<<r1.p<<endl;
	cout<<"2nd rectangle\n";
	cout<<r2;
	r2.area();
	r2.perimeter();
	cout<<"area of rectangle 2 is "<<r2.a<<endl;
	cout<<"perimeter of rectangle 2 is "<<r2.p<<endl;
	r1+r2;	
	if(r1==r2)
		cout<<"objects are same\n";
	else
		cout<<"objects are not same\n";
	return 0;
}
	
