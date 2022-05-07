#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> socks(n);
	for(int i=0; i<n; i++)
		cin>>socks[i];
	int count=0;
	sort(socks.begin(), socks.begin()+n);

	int i=0;
	for(; i<n; )
	{
		if(socks[i]==socks[i+1])
		{
			count++;
			i=i+2;
		}
		else
			i++;
	}

	cout<<count;
	return 0;
}