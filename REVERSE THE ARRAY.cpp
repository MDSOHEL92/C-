#include<iostream>
using namespace std;
// PROGRAM TO REVERSE THE ARRAY WITHOUT USING NAME ANY EXTRA ARRAY.
int main()
{
	int a[]={ 12,6,7,34,9,23,2,8,}; 
	int  n=sizeof(a)/4;
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	// REVERSE
	int i=0;
	int j=n-1;
	while(i<j)
	{
		int temp =a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
	cout<<endl;
	for(int i=0;i<n; i++)
	{
		cout<<a[i]<<" ";
	}
}
