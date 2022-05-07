#include <iostream>
using namespace std;

int main()
{
	long long int a[5];
	long long int max=0;

	for(int i=0; i<5; i++)
	{
		cin>>a[i];
		max+=a[i];
	}

	long long int b[5];
	for(int i=0; i<5; i++)
		b[i]=max-a[i];

	long long int mas=b[0];
	long long int min=b[0];

	for(int i=0; i<5; i++)
	{
		if(b[i]>mas)
			mas=b[i];
		if(b[i]<min)
			min=b[i];
	}

	cout<<min<<" "<<mas;

	return 0;
}