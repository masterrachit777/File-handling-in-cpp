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
	ifstream in;
	in.open("student1.dat",ios::in|ios::binary);
	student s1;
	int i=0;
	while(in.read((char*)&s1,sizeof(s1)))
	{
		cout<<"Student "<<i+1<<":-\t"<<s1.roll<<"\t"<<s1.name<<"\t"<<s1.tmarks<<endl;
		i++;
	}
	in.close();
	getch();
	return 0;
}
