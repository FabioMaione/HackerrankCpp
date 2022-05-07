#include <iostream>
using namespace std;

int solvemefirst(int a, int b)
{
	return a+b;
}

int main()
{
	int a, b;
	cin>>a>>b;

	cout<<solvemefirst(a, b);
	
	return 0;
}