#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int c,w,l;
class employee
{
	public:
		int en;
		char n[20];
		int sal;
		char d[20];
		void getdata()
		{
			fstream f("sample.txt",ios::app);
			cout<<"enter employee no\n";
			cin>>en;
			f<<"employee no is "<<en<<"\n";
			cout<<"enter name\n";
			cin>>n;
			f<<"name is "<<n<<"\n";
			cout<<"enter salary\n";
			cin>>sal;
			f<<"salary is "<<sal<<"\n";
			cout<<"enter department\n";
			cin>>d;
			f<<"department name is "<<d<<"\n";
			f.close();
			return;
		}
		static void putdata()
		{
			char s[100];
			fstream f("sample.txt");
			while(!f.eof())	
			{
				f.getline(s,100,'\n');
				cout<<s<<endl;
			}
			f.close();
		}
		void count()
		{
			c=0,w=-1,l=-1;
			fstream f("sample.txt");
			char ch;
			do
			{
				f.get(ch);
				if(ch!='\n'&&ch!=' ')
					c++;
				if(ch==' '||ch=='\n')
					w++;
				if(ch=='\n')
					l++;
			}while(!f.eof());
			f.close();
			cout<<c<<endl;
			cout<<w<<endl;
			cout<<l<<endl;
		}
};
int main()
{
	employee e;
	int i,n;
	cout<<"enter no of employee\n";
	cin>>n;
	for(i=0;i<n;i++)
	e.getdata();
	cout<<"\n\nresult is\n\n";
	employee::putdata();
	e.count();
	return 0;
}
			
