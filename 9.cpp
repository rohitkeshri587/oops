#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
using namespace std;
class shape
{
	public:
		virtual float get_area()=0;
};
class rectangle : public shape
{
	public:
		float l,b;
		rectangle()
		{
			cout<<"enter length and breadth of rectangle\n";
			cin>>l>>b;
		}
		float get_area()
		{
			return l*b;
		}
};
class ellipse : public shape
{
	public:
		float a,b;
		ellipse()
		{
			cout<<"enter length of major axis and minor axis of ellipse\n";
			cin>>a>>b;
		}
		float get_area()
		{
			return pi*a*b;
		}
};
int main()
{
	float a;
	rectangle r;
	ellipse e;
	shape *ptr;
	ptr=&r;
	a=ptr->get_area();
	cout<<"area of rectangle is "<<a<<endl;
	ptr=&e;
	a=ptr->get_area();
	cout<<"area of ellipse is "<<a<<endl;
	return 0;
}

