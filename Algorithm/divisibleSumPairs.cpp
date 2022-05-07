#include <iostream>
using namespace std;

int divisibleSumPairs(int n, int k, int *a)
{
	int c=0;
	int i=0;
	int j=1;
	while(i<n && i<j)
	{
		for(j=1; j<n; j++)
		{
			if(i<j)
				if((a[i]+a[j])%k==0)
					c++;
		}
		i++;
	}
	return c;
}

int main()
{
	int n, k;
	cin>>n>>k;

	int *a=new int[n];
	for(int i=0; i<n; i++)
		cin>>a[i];

	int ris=divisibleSumPairs(n, k, a);
	cout<<ris;

	delete []a;
	return 0;
}