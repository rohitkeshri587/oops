#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class cal
{
	public:
		double a,b,res;
		char s;
		cal()
		{
			cout<<"enter two numbers\n";
			cin>>a>>b;
			cout<<"enter operator +, -, * or /\n";
			cin>>s;
			res=eval(s,a,b);
			printf("result is %lf\n",res);
		}
		double eval(char symbol,double o1,double o2)
		{
			switch(symbol)
			{
				case '+':return o1+o2;
				case '-':return o1-o2;
				case '*':return o1*o2;
				case '/':return o1/o2;
				default: printf("invalid operator\n");
				return 0;
			}
		}
};
int main()
{
	cal s1;
	return 0;
}

