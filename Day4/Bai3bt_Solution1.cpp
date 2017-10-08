//Bai 3: Solution1_For
#include <iostream>
#include <conio.h>

using namespace std;

main()
{
	int n;
	bool chk = true;
		
	cout<<"n = ";
	cin>>n;
	
	if(n == 1)
	{
		chk = false;
	}
	else
	{
		for(int i = 2; i < n; i++)
		{
			if(n%i==0)
			{
				chk = false;
				break;
			}
		}
	}
	
	if(chk)
	{
		cout<<n<<" la so ngto";
	}
	else
	{
		cout<<n<<" ko la so ngto";
	}
	
	getch();
}
