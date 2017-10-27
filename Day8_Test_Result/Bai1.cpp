#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
	long int n;
	
	for(int i=0;;i++){
	
		cout<<"n = ";
		cin>>n;
		
		if(n>=100)
		{
			cout<<"n = "<<n;
			break;
		}
	}
	
	getch();
}
