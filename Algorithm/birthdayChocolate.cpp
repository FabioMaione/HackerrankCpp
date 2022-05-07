#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *a=new int [n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	int day, month;
	cin>>day>>month;
	int way=0;
	if(n==1)
	{
		if(month==1)
			if(day==a[0])
				way++;
	}
	else
	{
		int start=0;
		while(start<(n-3))
		{
			int cont=0;
			for(int i=start; i<start+month; i++)
				cont+=a[i];
			if(cont==day)
				way++;
			start++;
		}
	}
	cout<<way;

	delete []a;
	return 0;
}