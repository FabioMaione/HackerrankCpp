#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *vettore=new int [n];
	for(int i=0; i<n; i++)
		cin>>vettore[i];
	int j=n-1;
	while(j>=0)
	{
		cout<<vettore[j]<<" ";
		j--;
	}

	delete[]vettore;
	return 0;
}