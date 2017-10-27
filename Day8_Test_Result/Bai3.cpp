#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	string n;
	cout<<" nhap so n: ";
	getline(cin,n);
	
	if(n[n.length()-1]=='0'||n[n.length()-1]=='2'||n[n.length()-1]=='4'||n[n.length()-1]=='6'||n[n.length()-1]=='8')
	{
		cout<<"Chan";
	}
	else
	{
		cout<<"Le";
	}
	
	getch();
	
}
