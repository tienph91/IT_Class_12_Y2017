#include <iostream>
#include <conio.h>
#define N 100

using namespace std;

int main()
{
    int n, a[N] ,dem=0 ,x;

      cout<<"n = ";
      cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"] = ";
        cin>>a[i];
    }
    int Min=a[0];
    int Max=a[0];
    for(int i=1;i<n;i++)
    {
	
        if(a[i]>Max)
        {
            Max=a[i];
        }
        if(a[i]<Min)
        {
        	Min=a[i];
		}
           
    }
        cout << " Max =" << Max<<endl;
        cout<< " Min = " << Min <<endl;
       
      
       for( int j=0;j<n;j++)
       {
       	if(a[j]==Max)
       	{
       		dem=dem+1;
       		cout << " cac vi tri cua Max la:  " << j << endl;
       		
		}
	
	   }
	  
	   cout<< " so luong Max la: "<< dem;
 
}

