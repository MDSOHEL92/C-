#include<iostream>
using namespace std;  
// INVERTED TRIANGLE PATTERN
int main()
{
	int n=4;
	int num= 1;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<i; j++)     //SPACE
		{
			cout<<" ";
		}                          //NUMBER
		for(int j=0; j<n-1; j++)
		{
			cout<<endl;
		}
		return 0;
	}
}
