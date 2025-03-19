#include<iostream>
using namespace std;
// FIND THE MAXIMUM ELEMENT IN A GIVEN MATRIX
int main()
{
	int arr[4][2]={{76,81},{13,75},{82,92},{88,90}};   /// wrong ans
	int mx = INT_MIN;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<2; j++)
		{
			mx = max(mx,arr[i][j]);
		}
	}
	cout<<mx;
}
