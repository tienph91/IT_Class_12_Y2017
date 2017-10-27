#include <iostream>
#include <conio.h>
#define N 100

using namespace std;

int main()
{
    int n, a[N] , dem=0, viTri[N];

    cout<<"n = ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    
    int max=a[0];
    viTri[dem++]=0;
    
	for(int i=1;i<n;i++)
    {
	
        if(a[i]>max)
        {
            max=a[i];
            dem=0;
            viTri[dem++]=i;
        }
        else if(a[i]==max)
        {
        	viTri[dem++]=i;	
		}
    }
    
    cout<<"\nmax = "<<max<<endl;
    cout<<"Vi tri max = ";
	for(int i=0;i<dem;i++)
	{
		cout<<viTri[i]<<" ";
	}
}
