#include<iostream>
#include<string.h>
#define size 100
using namespace std;
class STRING
{
	public:
		char str[size];
		STRING()
		{
			strcpy(str," ");
		}
		STRING(char a[])
		{
			strcpy(str,a);
		}
		STRING(STRING &a, STRING &b)
		{	
			strcpy(str," ");
			strcat(str,a.str);
			strcat(str," ");
			strcat(str,b.str);
		}
		bool operator ==(STRING &s2)
		{
			if(strcmp(str,s2.str)==0)
				return true;
			else 
				return false;
		}
		friend ostream& operator <<(ostream &dout, STRING &s)
		{
			dout<<s.str;
			return dout;
		}
};
int main()
{	
	char s[size];
	cout<<"enter 1st string\n";
	cin>>s;
	STRING s1(s);
	cout<<"enter 2nd string\n";
	cin>>s;
	STRING s2(s);	
	STRING s3(s1,s2);
	cout<<"s1 string is "<<s1<<endl;
	cout<<"s2 string is "<<s2<<endl;
	cout<<"s3 string is "<<s3<<endl;
	if(s1==s2)
		cout<<"s1 is equal to s2\n";
	else
		cout<<"s1 is not equal to s2\n";
	return 0;
}
	
