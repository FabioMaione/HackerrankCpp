#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int *score=new int [n];
	for(int i=0; i<n; i++)
		cin>>score[i];

	int highest=score[0];
	int lowest=score[0];

	int breakHigh=0;
	int breakLow=0;

	for(int i=0; i<n; i++)
	{
		if(score[i]>highest)
		{
			highest=score[i];
			breakHigh++;
		}
		else if(score[i]<lowest)
		{
			lowest=score[i];
			breakLow++;
		}
	}
	cout<<breakHigh<<" "<<breakLow;

	delete[]score;
	return 0;
}