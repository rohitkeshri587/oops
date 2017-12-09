#include<iostream>
using namespace std;
class octal
{
	public:
		int oct,dec,ten;
		octal()
		{
			oct=0;
			ten=1;
		}
		void operator =(int x)
		{
			int r;
			dec=x;
			while(x!=0)
			{
				r=x%8;
				x=x/8;
				oct=oct+ten*r;
				ten=ten*10;
			}
			return;
		}
		int operator +(int k)
		{
			return(dec+k);
		}
		friend ostream& operator <<(ostream &dout, octal &o)
		{
			dout<<o.oct;
			return dout;
		}
		friend istream& operator >>(istream &din, octal &o)
		{
			din>>o.oct;
			return din;
		}
};
int main()
{
	octal h;
	int x,k;
	cout<<"enter any integer whose octal you want\n";
	cin>>x;
	h=x;
	cout<<"octal of "<<x<<" is "<<h<<endl;
	cout<<"enter any integer number you want to add to above octal\n";
	cin>>k;
	int a=h+k;
	cout<<"ans is "<<a<<endl;
	return 0;
}
