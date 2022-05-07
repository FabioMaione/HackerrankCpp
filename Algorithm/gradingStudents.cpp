#include <iostream>
using namespace std;

int nextMultiple(int a)
{
	if(a%5==0)
		return a;
	else
	{
		while(a%5!=0)
		{
			a++;
		}
		return a;
	}
}

void rounding(int *grade, int n)
{
	for(int i=0; i<n; i++)
	{
		if(grade[i]>=38)
		{
			if(nextMultiple(grade[i])-grade[i]<3)
				grade[i]=nextMultiple(grade[i]);
		}
	}
}

void print(int *grade, int n)
{
	for(int i=0; i<n; i++)
		cout<<grade[i]<<endl;
}
int main()
{
	int n;
	cin>>n;
	int *grade=new int[n];
	for(int i=0; i<n; i++)
		cin>>grade[i];
	rounding(grade, n);
	print(grade, n);

	delete[]grade;
	return 0;
}