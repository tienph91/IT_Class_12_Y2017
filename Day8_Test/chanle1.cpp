#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	string n;
	cout<<" nhap so n: ";
	getline(cin,n);
	
	if(n.length()-1==0 || n.length()-1==2 || n.length()-1 ==4 || n.length()-1 ==6 || n.length()-1==8)
		cout<<" n la so chan ";
	
	else
		cout<<" n la so le";
	getch();
	
}
