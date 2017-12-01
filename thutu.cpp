#include <iostream>
using namespace std;
int main(void)
{
  int A[100], n;
  int tg;
  cout<<"nhap so luong phan tu mang n= ";cin>>n;
  for(int i= 1 ; i<=n ; i++ )
  {
  	cout<<"nhap phan tu A["<<i<<"]= ";
  	cin>>A[i];
  }
    cout<<"mang vua nhap la: \n";
     for(int i=1;i<=n;i++)
	cout<<A[i]<<" ";
	 
	 for(int i=1;i<=n;i++)
	for(int j=i+1;j<=n;j++)
	
	if(A[i]<A[j])
	{
		tg=A[i];
		A[i]=A[j]; 
		A[j]=tg;
	}
    cout<<"day vua sap xep la: \n";
     for(int i=1;i<=n;i++)
    cout<< A[i] <<" ";
}

