#include <iostream>
using namespace std;

int main()
{
	int n; 
	cin>>n;
	int *a=new int[n];
	int type[5]={0};

	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i]==1)
			type[0]++;
		else if(a[i]==2)
			type[1]++;
		else if(a[i]==3)
			type[2]++;
		else if(a[i]==4)
			type[3]++;
		else if(a[i]==5)
			type[4]++;
	}

	int ind=0;
	int max=type[0];
	for(int i=0; i<5; i++)
		if(type[i]>max)
		{
			max=type[i];
			ind=i+1;
		}

	cout<<ind;

	delete []a;
	return 0;
}