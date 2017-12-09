#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct student
{
	char name[20];
	char usn[20];
	double height;
	double weight;
};
struct student s[5];
char n[20];
char u[20];
double h=0;
double w=0;
int i=0,j=0;
void getdata()
{
	for(i=0;i<5;i++)
	{
		cout<<"enter name of student no. "<<i+1<<endl;
		cin>>s[i].name;
		cout<<"enter usn of student no. "<<i+1<<endl;
		cin>>s[i].usn;
		cout<<"enter height of student no. "<<i+1<<endl;
		cin>>s[i].height;
		cout<<"enter weight of student no. "<<i+1<<endl;
		cin>>s[i].weight;
	}
	return;
}
void sort()
{
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(s[j].height>s[j+1].height)
			{
				strcpy(n,s[j+1].name);
				strcpy(s[j+1].name,s[j].name);
				strcpy(s[j].name,n);
				strcpy(u,s[j+1].usn);
				strcpy(s[j+1].usn,s[j].usn);
				strcpy(s[j].usn,u);
				h=s[j+1].height;
				s[j+1].height=s[j].height;
				s[j].height=h;
				w=s[j+1].weight;
				s[j+1].weight=s[j].weight;
				s[j].weight=w;
			}
		}
	}
	return;
}
void display()
{
	for(i=0;i<5;i++)
	{
				cout<<"details of student no "<<i+1<<endl;
				cout<<"name is "<<s[i].name<<endl;
				cout<<"usn is "<<s[i].usn<<endl;
				cout<<"height is "<<s[i].height<<endl;
				cout<<"weight is "<<s[i].weight<<endl;
	}
	return;
}
int main()
{
	cout<<"enter details of students\n\n";
	getdata();
	cout<<"data will be sorted in ascending order according to height of student\n\n";
	sort();
	cout<<"the sorted data is:\n\n";
	display();
	return 1;
}
