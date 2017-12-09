#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	char c[50];
	char d[50];
	fstream f;
	f.open("myfile.dat",ios::binary|ios::out);
	cout<<"Enter Data\n";
	fgets(c,50,stdin);
	f.write((char *)&c,30);
	f.close();
	f.open("myfile.dat",ios::binary|ios::in);
	f.read((char *)&d,50);
	cout<<"\nFile Contents\n"<<d<<endl;
	f.close();
	f.open("myfile.dat",ios::binary|ios::ate|ios::in|ios::out);
	f.seekp(-15,ios::cur);
	cout<<"\nPointer has been Offset by 15 bytes\n";
	cout<<"\nEnter New Data to be Appended\n";
	fgets(c,50,stdin);
	f.write((char *)&c,20);
	f.close();
	f.open("myfile.dat",ios::binary|ios::in);
	f.getline(d,50,'\n');
	cout<<"\nFile Contents\n"<<d<<endl;
	f.close();
	return 0;
}
