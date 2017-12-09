#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char c[50];
	char d[50];
	fstream f;
	f.open("abc.dat",ios::binary|ios::out);
	cout<<"enter data\n";
	fgets(c,50,stdin);
	f.write((char *)&c,30);
	f.close();
	f.open("abc.dat",ios::binary|ios::in);
	f.read((char *)&d,50);
	cout<<"\ncontents are\n"<<d<<endl;
	f.close();
	f.open("abc.dat",ios::binary|ios::ate|ios::in|ios::out);
	f.seekp(-15,ios::cur);
	cout<<"enter data\n";
	fgets(c,50,stdin);
	f.write((char *)&c,20);
	f.close();
	f.open("abc.dat",ios::binary|ios::in);
	f.getline(d,50,'\n');
	cout<<d<<endl;
	f.close();
	return 0;
}
