#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string word;
	cin>>word;
	int count=1;

	for(int i=0; i<word.length(); i++)
	{
		if(isupper(word[i]))
			count++;
	}
	cout<<count;
	return 0;
}