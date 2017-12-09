#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class dis
{
	public:
		int feet;
		int inch;
		dis()		
		{
			feet=0;
			inch=0;
		}
		dis(int a, int b)
		{
			feet=a;
			inch=b;
		}
		dis operator ++()
		{
			inch++;
			if(inch>12)
			{
				feet++;
				inch=0;
			}
			return dis(feet,inch);
		}
		dis operator --(int)
		{
			inch--;
			if(inch<0)
			{
				feet--;
				inch=12;
			}
			return dis(feet,inch);
		}
		void operator =(dis &d)
		{
			feet=d.feet;
			inch=d.inch;
			return;
		}
		friend ostream &operator <<(ostream &dout, dis &d);
};
ostream &operator <<(ostream &dout, dis &d)
{
	dout<<d.feet<<"\' "<<d.inch<<"\""<<endl;
}
int main()
{
	int a, b;
	cout<<"enter values of feet and inches\n";
	cin>>a>>b;
	dis d1(a,b);
	cout<<d1<<endl;
	cout<<"Increment the values by using Pre Increment\n";
	++d1;
	cout<<d1<<endl;
	cout<<"Decrement the values using post decrement\n";
	cout<<d1<<endl;
	d1--;
	cout<<d1<<endl;
	dis d2;
	cout<<"Assign the values to another object\n";
	d2=d1;
	cout<<d2<<endl;
	return 0;
}
