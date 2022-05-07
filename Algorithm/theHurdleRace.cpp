#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int maxJump;
	cin>>maxJump;
	std::vector<int> hurdles(n);
	for(int i=0; i<n; i++)
		cin>>hurdles[i];
	int beverage=0;
	int highHurdle=hurdles[0];
	for(int i=0; i<n; i++)
		if(hurdles[i]>highHurdle)
			highHurdle=hurdles[i];

	for(int i=0; i<n; i++)
		if(highHurdle>maxJump)
			beverage=highHurdle-maxJump;
	cout<<beverage;

	return 0;
}