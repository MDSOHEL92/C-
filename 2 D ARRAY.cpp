#include<iostream>
using namespace std;
// WRITE A PROGRAM TO STORE 10 AT EVERY INDEX OF A 2D MATRIX WITH 5 ROWS AND 5 COLUMS
int main()
{
	int arr[5][5];
	for(int i=0; i<=4; i++)
	{
		for(int j=0; j<=5; j++)
		{
			arr[i][j]=786;
		}
	}
	for(int i=0; i<=4; i++)
	{
		for(int j=0; j<5; j++)
		{
			cout<<arr[i][i]<<" ";
		}
		cout<<endl;
	}
}
