#include <iostream>
using namespace std;
const unsigned n=6;

void read(int **m)
{
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin>>m[i][j];
}

void print(int ** m)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cout<<m[i][j]<<" ";	
		cout<<endl;
	}
}
int main()
{
	int **matrix=new int*[n];
	for(int i=0; i<n; i++)
		matrix[i]=new int[n];
	read(matrix);



	for(int i=0; i<n; i++)
		delete[]matrix[i];
	delete[]matrix;
	return 0;
}