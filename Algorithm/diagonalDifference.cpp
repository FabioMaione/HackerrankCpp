#include <iostream>
#include <cmath>
using namespace std;

int differenze(int **a, int n)
{
	int sum1=0;
	int sum2=0;
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			if(i==j)
				sum1+=a[i][j];
	
	int mi=0; int mj=n-1;
	for(int i=0; i<n; i++)
		for(int j=n-1; j>=0; j--)
			if(i==mi && j==mj)
			{
				sum2+=a[i][j];
				mi++; mj--;
			}

	sum1=sum1-sum2;
	return(fabs(sum1));
}

int main()
{
	int n;
	cin>>n;
	int **a=new int*[n];
	for(int i=0; i<n; i++)
		a[i]=new int[n];

	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>a[i][j];

	cout<<differenze(a, n);

	for (int i=0; i < n; i++)
    	delete[] a[i];
	delete[] a;
	return 0;
}