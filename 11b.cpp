#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class account
{
	public:
		int an;
		char name[20];
		float bal=0.0;
		account()
		{
			cout<<"enter name\n";
			cin>>name;
			cout<<"enter account no\n";
			cin>>an;
		}
		void deposit()
		{
			float d;
			cout<<"enter deposit amount\n";
			cin>>d;
			bal=bal+d;
			return;
		}
		void withdraw()
		{
			float w;
			cout<<"enter withrawal amount\n";
			cin>>w;
			try
			{
				if(w>bal)
				{
					throw w;
				}
				else
					bal=bal-w;
			}
			catch(float)
			{
				cout<<"Withdraw amount is more than the balance amount\n";
			}
			return;
		}
		void display()
		{
			cout<<name<<endl;
			cout<<an<<endl;
			cout<<bal<<endl;
			return;
		}
};
int main()
{
	account x;
	int ch;
	for(;;)
	{
		cout<<"menu\n1.deposit\n2.withdraw\n3.display data\n4.exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:x.deposit();
				break;
			case 2: x.withdraw();
				break;
			case 3: x.display();
				break;
			case 4: return 0;
			default : cout<<"invalid choice\n";
		}
	}
}
		
			
