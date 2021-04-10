#include<iostream>
#include<conio.h>
using namespace std;
#include<fstream>
int main()
{
	ifstream ifs("a,txt");
	char str[80];
	while(ifs.getline(str,80))
	{
		cout<<str<<endl;
		
	}
	ifs.close();
	getch();
	return 0;
	
}
