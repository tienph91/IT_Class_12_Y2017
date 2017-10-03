// Nhap vao 2 so a va b. Doi gia tri 2 so nay
//Input: a = 1, b = 3
// Output: a = 3, b = 1;
#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	int a,b;
	
	cout<<"Nhap a: ";
	cin>>a;
	
	cout<<"Nhap b: ";
	cin>>b;
	
	a=a^b;
	b=a^b;
	a=a^b; 
	
	cout<<" a = "<< a<<endl;
	cout<<" b = "<< b;
	
	getch();
}
