#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class complex
{
	public:
		int real,img;
		complex()
		{
			cout<<"enter real and imaginary part of complex number\n";
			cin>>real>>img;
		}
		void display()
		{
			cout<<"("<<real<<")+i("<<img<<")\n";
			return;
		}
		friend void add(complex &c1, complex &c2);
		friend void multiply(complex &c1, complex &c2);
};
void add(complex &c1, complex &c2)
{
	int r= c1.real+c2.real;
	int i= c1.img+c2.img;
	cout<<"("<<r<<")+i("<<i<<")\n";
	return;
}
void multiply(complex &c1, complex &c2)
{
	int r= (c1.real*c2.real)-(c1.img*c2.img);
	int i= (c1.real*c2.img)+(c2.real*c1.img);
	cout<<"("<<r<<")+i("<<i<<")\n";
	return;
}
int main()
{
	complex c1,c2;
	cout<<"complex nos are\n";
	c1.display();
	c2.display();
	cout<<"sum of complex nos is\n";
	add(c1,c2);
	cout<<"product of complex nos is\n";
	multiply(c1,c2);
	return 0;
}
