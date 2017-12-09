#include<iostream>
using namespace std;
int f=-1;
int r=-1;
template<class t>
class queue
{
	t q[4];
	public:
		void insert()
		{
			t item;
			cout<<"Enter item\n";
			cin>>item;
			if(r>=3)
			{
				cout<<"queue overflow\n";
				return;
			}
			if(f==-1)
			{
				f=0;
			}
			q[++r]=item;
			return;
		}
		void del()
		{
			if(r==-1)
			{
				cout<<"underflow\n";
				return;
			}
			cout<<q[f++]<<" is deleted\n";
			if(f>r)
			{
				f=r=-1;
			}
			return;
		}
		void display()
		{
			int i;
			if(r==-1)
			{
				cout<<"queue empty\n";
				return;
			}
			cout<<"queue is:\n";
			for(i=f;i<=r;i++)
			{
				cout<<q[i]<<" ";
		        }
			cout<<endl;
		}
}; 
int main()
{
	queue<int>w1;
	queue<double>w2;
	int n,ch;
	cout<<"enter\n1 for integer queue\n2 for double queue\n";
	cin>>n;
	if(n==1)
	{
		for(;;)
		{
			cout<<"1 to insert\n2 to delete\n3 to display\n4 to exit\n";
			cin>>ch;
			switch(ch)
			{
				case 1: w1.insert();
					break;
				case 2: w1.del();
					break;
				case 3: w1.display();
					break;
				default:return 1;
			}
		}
	}
	else if(n==2)
	{
  		for(;;)
		{
			cout<<"1 to insert\n2 to delete\n3 to display\n4 to exit\n";
			cin>>ch;
			switch(ch)
			{
				case 1: w2.insert();
					break;
				case 2: w2.del();
					break;
				case 3: w2.display();
					break;
				default:return 1;
			}
		}
	}
	return 0;
}
