#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
using namespace std;
void area(double l, double b)
{
	printf("area is %lf\n",l*b);
	return;
}
void area(double s)
{
	printf("area is %lf\n",s*s);
	return;
}
void area(double r, int a)
{
	printf("area is %lf\n",r*r*pi);
	return;
}
int main()
{
	double r,l,b,s;
	int ch;
	for(;;)
	{
		printf("Menu\n1.Area of Square\n2.Area of Rectangle\n3.Area of Circle\n4.Exit\n");
		cin>>ch;
		switch(ch)	
		{
			case 1: printf("enter length of side\n");
				cin>>s;
				area(s);
				break;
			case 2: printf("enter length and breadth\n");
				cin>>l>>b;
				area(l,b);
				break;
			case 3: printf("enter radius of circle\n");
				cin>>r;
				area(r,1);
				break;
			case 4: return 0;
			default: cout<<"Invalid Choice\n";
		}
	}
}
