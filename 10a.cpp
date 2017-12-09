#include<iostream>
#include<fstream>
using namespace std;
int c,w,l;
class Employee
{
	public: 	
		int empno;
		char name[20];
		int sal;
		char dept[20];
		void getdata()
		{
			fstream fout("Employee.txt",ios::app);
			cout<<"Enter Employee No\n";
			cin>>empno;
			fout<<"Employee No is "<<empno<<"\n";
			cout<<"Enter Name\n";
			cin>>name;
			fout<<"Name is "<<name<<"\n";
			cout<<"Enter Salary\n";
			cin>>sal;
			fout<<"Salary is "<<sal<<"\n";
			cout<<"Enter Department\n";
			cin>>dept;
			fout<<"Department is "<<dept<<"\n";
			fout.close();
		}
		static void putdata()
		{
			fstream fin("Employee.txt");
			char str[100];
			while(!fin.eof())
			{
				fin.getline(str,100,'\n');
				cout<<str<<endl;
				fin.getline(str,100,'\n');
				cout<<str<<endl;
				fin.getline(str,100,'\n');
				cout<<str<<endl;
				fin.getline(str,100,'\n');
				cout<<str<<endl;
			}
			fin.close();
		}
};
void count()
{
	char ch;
	c=0;
	w=-1;
	l=-1;
	fstream fin("Employee.txt");
	do
	{
		fin.get(ch);
		if(ch!='\n'&&ch!=' ')
		c++;
		if(ch==' '||ch=='\n')
		w++;
		if(ch=='\n')
		l++;
	}while(!fin.eof());
	fin.close();
	return;
}
int main()
{
	Employee e;
	e.getdata();
	cout<<"\n\nRecords are:-\n\n";
	Employee::putdata();
	count();
	cout<<"No. of Characters="<<c<<endl;
	cout<<"No. of Words="<<w<<endl;
	cout<<"No. of Lines="<<l<<endl;
	return 0;
}                         
