#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
struct student
{
	int roll,year,clas,tmarks;
	char name[30];
};
int main()
{
	ofstream out;
	out.open("student1.dat",ios::out|ios::binary);
	student s1[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Student "<<i+1<<":-\nName: ";
		cin>>s1[i].name;
		cout<<"Roll no: ";
		cin>>s1[i].roll;
		cout<<"Year: ";
		cin>>s1[i].year;
		cout<<"Class: ";
		cin>>s1[i].clas;
		cout<<"Total marks: ";
		cin>>s1[i].tmarks;
		cout<<endl<<endl;
    }
    out.write((char*)&s1,sizeof(s1));
    out.close();
    cout<<"Stored the data in file";
    getch();
    return 0;
}

