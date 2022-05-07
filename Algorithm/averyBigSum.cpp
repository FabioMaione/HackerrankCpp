#include <iostream>
using namespace std;

long long int sum(int *a, int n)
{
	long long int somma=0;
	for(int i=0; i<n; i++)
		somma+=a[i];
	return somma;
}

int main()
{
	int n;
	cin>>n;

	int *a=new int [n];
	for(int i=0; i<n; i++)
		cin>>a[i];

	cout<<sum(a, n);

	delete []a;
	return 0;
}