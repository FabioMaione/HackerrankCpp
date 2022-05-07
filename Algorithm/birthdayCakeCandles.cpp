#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int *a=new int [n];
	int max=0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i]>max)
			max=a[i];
	}

	int c=0;
	for(int i=0; i<n; i++)
		if(a[i]==max)
			c++;

	cout<<c;

	delete []a;
	return 0;
}