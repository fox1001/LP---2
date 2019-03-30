#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include<stdlib.h>
#include <math.h>
//-O2

using namespace std;


int *TA;
int *TB;


void insertion_sort (int *a, int n)
{
 	int m=0;
	int min = 0; // menor
	
	for (int i=1; i < n ;i++)
	{
	int aux = a[i];
	int n = i-1;
	
		while (min <= n)
		{
			m = (min+n)/2;
			
			if (aux < a[m])
			{
				n = m-1;
			}
			else 
			{
				min = m+1;
			}
		}	
		for (int j = i-1; j >= min; j--)
		{
			a[j+1] = a[j];	
		}
			a[min] = aux;
	}
}


void selection_sort(int *a,int n)
{
	int aux, menor;
	
	for(int i=0;i<n-1;i++)
	{
		menor=i;   // posicion menor
		
		for (int j=i+1;j<n;j++)
		{
			if(a[j]<a[menor])
			{
				menor=j;
			}
			aux=a[menor];
			a[menor]=a[i];
			a[i]=aux;
		}
	}	
	
}	


void bubble_sort (int *a, int n)
{

	n--;
	int n_=n;
	
	for (int j=0;j<=n_;++j)
	{
		for (int i=0;i<n;i++)
		{
			if (a[i]>a[i+1])
			{
				swap(a[i],a[i+1]);
			}
		}
	n_--;

	}
	
}
	
/*	
	
	int n_=n;
	for (int i=0;i<=n_;i++)
	{
		int menor =i;
	}
	for (int j=i+1;j<=n;j++)
	{
		if(a[j]<a[menor])
		{
			menor=j;
		}
		swap(a[i],a[menor]);
	}
}
*/

bool lineal(int *a, int n, int b)
{
	for ( int i=0;i<n;i++)
	{
		if (a[i]==b)
		{
			return true;
		}
	}
	return false;	
}
bool binary (int *a, int n, int b)
{
	int i=0, j=n;
	
	while (i<j)
	{
		int m = (i+j)/2;
		
		if (a[m]==b)
		{
			return true;
		}
		if (a[m]>b)
		{
			j=m;
		}
		else 
		{
			i=m;
		}	
	}
	return false;
}

bool binary_recurcivo (int *a, int n, int x, int min=0)
{
	n--;
	
	if (min > n )
	{
		return false;
	}
	 int m=(min+n)/2;
	 
	if(a[m]==x)
	{
		return true;
	}
	if (a[m>x])
	{
		n=m;
		binary_recurcivo (a,n,x,min);
	}
	else 
	{
		min=m;
		binary_recurcivo (a,n,x,min);
	}
}









typedef long long myint;
typedef void ((*fun_sort)(int *, int));

bool test_sort ( fun_sort sort,const int *A,int n)
{
	memcpy(TA,A,sizeof(int)*n);
	memcpy(TB,A,sizeof(int)*n);
	
	clock_t t=clock();
	sort(TA,n); // el sort
	float time=float (clock() - t) / CLOCKS_PER_SEC;
	std::sort(TB,TB+n); // std 
	for (int i=0;i<n;i++)
	{
		if (TA[i]!=TB[i])
		{
			return false;
		}
		cout<<time<<" ";
	}
	return true;
}


int main ()
{
	srand(time(NULL));
	int N = pow(10,5);
	int*A=new int [N];
	TA=new int [N];
	TB=new int [N];
    fun_sort sort[3] = {selection_sort,insertion_sort,bubble_sort};
	
	for (int n=100;n<=N;n*=10)
	{
		for (int i=0;i<n;i++)
		{
			A[i]=rand()%n;
		}
		cout<<n<<" ";
		
		for (int s=0;s<3;s++)
		{
			if (!test_sort(sort[s],A,n))
			{
				cout<<"FAIL\n";
		        return 0;
			}
			
		}
		cout <<endl;
	}
    
}





































