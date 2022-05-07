#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string converte(string word, int n, int r)
{
	string a=word;
	for(int i=0; i<n; i++)
	{
		if(isalpha(a[i]))
		{
			if(islower(a[i]))
			{
				if((a[i]+r)<=122)
					a[i]+=r;
				else
					a[i]=(a[i]+r)-26;
			}
			else if(isupper(a[i]))
			{
				if((a[i]+r)<=90)
					a[i]+=r;
				else
					a[i]=(a[i]+r)-26;
			}
		}
	}
	return a;
}

int main()
{
	int n;
	cin>>n;
	string word;
	cin>>word;
	int rotation;
	cin>>rotation;
	rotation=rotation%26;

	cout<<converte(word, n, rotation);

	return 0;
}