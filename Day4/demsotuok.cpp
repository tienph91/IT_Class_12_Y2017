#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main()
{
	string s;
	int dem;
	cout<<" nhap xau:  ";
	getline(cin,s,'\n');
	for(int i=0;i<s.length();i++)
	
	if(s[i]==' ' && s[i+1] != ' ')
	   dem++;
	
	if(s[0] != ' ')
	  dem++;
	  
	 cout<<"so tu trong xau vua nhap la: "<< dem << " tu ";
	 
	 getch();    
}
