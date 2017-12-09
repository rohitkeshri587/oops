#include<iostream>
#include<stdio.h>
using namespace std;
int i=0,j=0,k=0,sum=0;
class matrix
{
	public:
		int m,n,**p;
		matrix(int x, int y)
		{
			cout<<"Object created, constructor called, memory allocated\n";
			m=x;
			n=y;
			p= new int *[m];
			for(i=0;i<m;i++)
				p[i]= new int [n];
		}
		matrix(matrix &m1)
		{
			cout<<"Object created, constructor called, memory allocated\n";
			m=m1.m;
			n=m1.n;
			p= new int *[m];
			for(i=0;i<m;i++)
				p[i]= new int [n];
			for(i=0;i<m;i++)
				for(j=0;j<n;j++)
					p[i][j]=m1.p[i][j];
		}	
		~matrix()
		{
			cout<<"destuctor invoked, memory space destroyed\n";
			delete(p);
		}
		void getdata()
		{
			cout<<"enter elements of matrix\n";
			for(i=0;i<m;i++)
				for(j=0;j<n;j++)
					cin>>p[i][j];
			return;
		}
		void putdata()
		{
			cout<<"matrix is:\n\n";
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cout<<p[i][j]<<"\t";
				}
				cout<<"\n";
			}
			return;
		}
		void add(matrix& a)
		{
			if(m!=a.m || n!=a.n)
			{
				cout<<"addition not possible\n";
				return;
			}
			matrix b(m,n);
			for(i=0;i<m;i++)
				for(j=0;j<n;j++)
					b.p[i][j]=p[i][j]+a.p[i][j];
			cout<<"matrix obtained by adding two matrix is\n\n";
			b.putdata();
			return;
		}
		friend void multiply(matrix &b,matrix& a)
		{
			if(b.n!=a.m)
			{
				cout<<"multiplication not possible\n";
				return;
			}
			matrix c(b.m,a.n);
			for (i = 0; i <c.m; i++)
			{
      				for (j = 0; j <c.n; j++) 
				{
        				for (k = 0; k <c.m; k++) 
					{
          					sum = sum + b.p[i][k]*a.p[k][j];
        				}
 					c.p[i][j] = sum;
 		       			sum = 0;
      				}
			}
			cout<<"matrix obtained by multiplying two matrix is\n\n";
			c.putdata();
			return;
		}
};
int main()
{
	int m,n;
	cout<<"enter value of m and n for order mxn for matrix 1\n";
	cin>>m>>n;
	matrix m1(m,n);
	m1.getdata();
	cout<<"enter value of m and n for order mxn for matrix 2\n";
	cin>>m>>n;
	matrix m2(m,n);
	m2.getdata();
	cout<<"copy constructor called\n";
	cout<<"matrix 1 copied to matrix 3\n";
	matrix m3(m1);
	m1.putdata();
	m2.putdata();
	m3.putdata();
	m1.add(m2);
	multiply(m1,m2);
	return 0;
}			
				
		
