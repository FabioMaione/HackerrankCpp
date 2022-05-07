#include <iostream>
using namespace std;

int main()
{
	int n;
	double c[3]={0};
	cin>>n;
	double d=n;

	double *a=new double [n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i]>0)
			c[0]++;
		else if(a[i]<0)
			c[1]++;
		else if(a[i]==0)
			c[2]++;
	}

	for(int i=0; i<3; i++)
		cout<<c[i]/d<<endl;

	delete []a;
	return 0;
}