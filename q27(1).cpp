#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
	char data;
	ifstream in;
	in.open("textfile1.txt");
	ofstream out;
	out.open("textfile2.txt");
	while(in.get(data))
	{
		if(data!=' ')
		out.put(data);
	}
	out.close();
	in.close();
	getch();
	return 0;
}
