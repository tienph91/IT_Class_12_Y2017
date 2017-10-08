#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	long int n;
	long int a=2;
	cout<<" nhap n: ";
	cin>>n;
	
	if(n<=0 )
	{
		return 0;
	}
    else
    {
       while(a<n)
       {
	       	int x=n%a;
	       	
	       	if(x==0)
			{
	       		cout<<"ko la so nguyen to"<<endl;
				break;
	       	}
	       	else
	       	{
	       		a+=1;
	       		if(a==n)
	       		{
	       			cout<<"la so nguyen to";
				}
		    }
	   	}
	}
	
	getch();
}

