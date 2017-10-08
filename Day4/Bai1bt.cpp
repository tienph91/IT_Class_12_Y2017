#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	float a;
	do
	{
		cout<<"nhap a: ";
		cin>>a;
	}
	while(a<=0);
	
	cout<<" so nguyen gan nhat la:  " << (int)(a+0.5) <<endl;
	cout<<" so nguyen gan nhat nho hon no la: "<< (int)a<<endl;
	
	getch();
	
}
