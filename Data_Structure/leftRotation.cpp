#include <iostream>
using namespace std;

int main()
{
	int n;
	int rotation;
	cin>>n>>rotation;
	int *vettore=new int[n];
	for(int i=0; i<n; i++)
		cin>>vettore[i];
	for(int i=rotation; i<n+rotation; i++)
	{
		if(i<n)
			cout<<vettore[i]<<" ";
		else
			cout<<vettore[i-n]<<" ";
	}


	delete[]vettore;
	return 0;
}