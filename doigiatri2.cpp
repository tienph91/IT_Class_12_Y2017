#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a,b;
	cout<<"nhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"so a: "<< a<<endl;
	cout<<"so b: "<< b<<endl;
	
	getch();
}
