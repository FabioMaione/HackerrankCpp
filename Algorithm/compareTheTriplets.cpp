#include <iostream>
using namespace std;

void solve(int ta[], int tb[])
{
	int pointAlice=0;
	int pointBob=0;
	int result[2];
	for(int i=0; i<3; i++)
	{
		if(ta[i]>tb[i])
			pointAlice++;
		else if(ta[i]<tb[i])
			pointBob++;
	}
	result[0]=pointAlice;
	result[1]=pointBob;

	for(int i=0; i<2; i++)
		cout<<result[i]<<" ";
}

int main()
{
	int tripleA[3];
	int tripleB[3];

	for(int i=0; i<3; i++)
		cin>>tripleA[i];
	for(int i=0; i<3; i++)
		cin>>tripleB[i];

	solve(tripleA, tripleB);

	return 0;
}