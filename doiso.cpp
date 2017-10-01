#include <iostream>
#include <conio.h>

using namespace std;

main(void)

{
	float a,x;
	int b,d;
	
	cout<<"SO a DUOC CAU TAO BOI PHAN NGUYEN VA PHAN THAP PHAN.\n";
	cout<<"Nhap phan nguyen: "; // phan nguyen cua so a>>           
	cin>>d;
	cout<<"nhap phan thap phan: "; // phan thap phan cua so a
	cin>>x;
	a=d+x;
	cout<<"so a la: "<< d+x <<'\n';
	
	if(x>=0.5)
	cout<<"ta co so b = "<< a+1-x;
	
	else if(x<0.5)
    cout<<"ta co so b = "<< a-x;
    
	getch();
	
}
